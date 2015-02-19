#include "pru.h"
#include "ihx.h"
#include <cstdlib>
#include <unistd.h>
#include <fcntl.h>
#include <memory.h>
#include <sys/mman.h>

#define TAG(s) ;

prumem_t* pruMapRegisters(int fd) {
	return (prumem_t*) mmap(
		0, sizeof(prumem_t),
		PROT_READ | PROT_WRITE,
		MAP_SHARED,
		fd, 0 * sysconf(_SC_PAGESIZE)
	);
}

void pruReset(prumem_t *pru, int n) {
	TAG("reset");
	
	// Resturn to reset condition.
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		break;
		
	default:
		return;
	}
	
	// Halt PRU
	ctl->CONTROL.bit.ENABLE = 0;
	
	// Wait for halt
	while (ctl->CONTROL.bit.RUNSTATE);
	
	// Reset
	ctl->CONTROL.bit.PCOUNTER_RST_VAL = 0;
	ctl->CONTROL.bit.SOFT_RST_N = 0;
	ctl->CONTROL.bit.ENABLE = 0;
}

void pruRun(prumem_t *pru, int n) {
	TAG("run");
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		pru->CFG.CGR.bit.PRU0_CLK_EN = 1;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		pru->CFG.CGR.bit.PRU1_CLK_EN = 1;
		break;
		
	default:
		return;
	}
	
	ctl->CONTROL.bit.SOFT_RST_N = 1;
	ctl->CONTROL.bit.SINGLE_STEP = 0;
	ctl->CONTROL.bit.ENABLE = 1;
}

void pruStep(prumem_t *pru, int n) {
	TAG("step");
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		pru->CFG.CGR.bit.PRU0_CLK_EN = 1;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		pru->CFG.CGR.bit.PRU1_CLK_EN = 1;
		break;
		
	default:
		return;
	}
	
	pru->CFG.CGR.bit.INTC_CLK_EN = 1;
	ctl->CONTROL.bit.SOFT_RST_N = 1;
	ctl->CONTROL.bit.SINGLE_STEP = 1;
	ctl->CONTROL.bit.ENABLE = 1;
}

bool pruIsHalted(prumem_t *pru, int n, uint32_t timeout_ms) {
	TAG("isHalted");
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		break;
		
	default:
		return true;
	}
	
	return ctl->CONTROL.bit.RUNSTATE == 0;
}

void pruHalt(prumem_t *pru, int n) {
	TAG("isHalted");
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		break;
		
	default:
		return;
	}
	
	ctl->CONTROL.bit.ENABLE = 0;
}

// true on error
bool pruWaitForHalt(prumem_t *pru, int n, uint32_t timeout_ms) {
	TAG("waitForHalt");
	pru_control_frame_t *ctl;
	switch(n) {
	case 0:
		ctl = &pru->PRU0CTL;
		break;
		
	case 1:
		ctl = &pru->PRU1CTL;
		break;
		
	default:
		return true;
	}
	
	while (timeout_ms--) {
		if (ctl->CONTROL.bit.RUNSTATE == 0) return false;
		usleep(1000);
	};
	return true;
}

// Return true on error
using namespace std;
bool pruLoadProgram(prumem_t *pru, int n, const char *fname) {
	TAG("read");
	
	// Find out extension
	string ext = fname;
	size_t pos = ext.find_last_of('.');
	if (pos == string::npos) {
		return true;
	}
	ext = string(ext, pos+1);

	// Which PRU am I loading to?
	char *p;
	switch(n) {
	case 0:
		memset(pru->IRAM0.u8, 0, sizeof(pru->IRAM0));
		memset(pru->DRAM0.u8, 0, sizeof(pru->DRAM0));
		p = (char *)&pru->IRAM0;
		break;
		
	case 1:
		memset(pru->IRAM1.u8, 0, sizeof(pru->IRAM1));
		memset(pru->DRAM1.u8, 0, sizeof(pru->DRAM1));
		p = (char *)&pru->IRAM1;
		break;
		
	default:
		// Unknown PRU
		return true;
	}
	
	// Binary raw images
	if (ext == "bin" || ext == "img") {
		ifstream img(fname, ios::in|ios::binary);
		if (!img) return true;
		
		// Read data directly to PRU memory.
		img.read(p, sizeof(pru->IRAM0));
		
		// All is well
		return false;
	}
	
	// Intel-hex file types
	if (ext == "hex" || ext == "ihx") {
		// Load intel hex
		ihx ldr(fname);
		if (!ldr) return true; // Failed to load
		
		// Iterate sectors
		for (ihx::iterator i=ldr.begin(); i!=ldr.end(); ++i) {
			// Iterate bytes in sector
			for (size_t j=0; j<i->data.size(); ++j) {
				// Check if Address out of bounds
				if (i->address + j > sizeof(pru->IRAM0)) {
					return true;
				}
				
				// Copy data.
				p[i->address + j] = i->data[j];
			}
		}
		
		// All is well
		return false;
	}

	// File type unknown
	return true;
}

void pruInterruptConfig(prumem_t *pru) {
	// Interrupts:
	// System to channel mapping:
	pru->INTC.CMR13.bit.CH_MAP_53 = 0; // Interrupt 53 to channel 0 // gen_intr_pend, ADC
	pru->INTC.CMR11.bit.CH_MAP_46 = 0; // Interrupt 46 to channel 0 // ePWM1
	pru->INTC.CMR10.bit.CH_MAP_43 = 0; // Interrupt 43 to channel 0 // ePWM0
	pru->INTC.CMR9.bit.CH_MAP_37 = 0; // Interrupt 37 to channel 0 // ePWM2
	pru->INTC.CMR4.bit.CH_MAP_16  = 2;  // R31 Vector 0 to channel 2 // EVTOUT0
	pru->INTC.CMR4.bit.CH_MAP_17  = 3;  // R31 Vector 1 to channel 3 // EVTOUT1
	pru->INTC.CMR4.bit.CH_MAP_18  = 4;  // R31 Vector 2 to channel 4 // EVTOUT2
	pru->INTC.CMR4.bit.CH_MAP_19  = 5;  // R31 Vector 3 to channel 5 // EVTOUT3
	pru->INTC.CMR5.bit.CH_MAP_20  = 6;  // R31 Vector 4 to channel 6 // EVTOUT4
	pru->INTC.CMR5.bit.CH_MAP_21  = 7;  // R31 Vector 5 to channel 7 // EVTOUT5
	pru->INTC.CMR5.bit.CH_MAP_22  = 8;  // R31 Vector 6 to channel 8 // EVTOUT6
	pru->INTC.CMR5.bit.CH_MAP_23  = 9;  // R31 Vector 7 to channel 9 // EVTOUT7
	
	// Channel to host mapping:
	pru->INTC.HMR0.bit.HINT_MAP_0 = 0; // Channel 0 to Host 0 // R31.B30
	pru->INTC.HMR0.bit.HINT_MAP_1 = 1; // Channel 1 to Host 1 // R31.B31
	pru->INTC.HMR0.bit.HINT_MAP_2 = 2; // Channel 2 to Host 2 // EVTOUT0
	pru->INTC.HMR0.bit.HINT_MAP_3 = 3; // Channel 3 to Host 3 // EVTOUT1
	pru->INTC.HMR1.bit.HINT_MAP_4 = 4; // Channel 4 to Host 4 // EVTOUT2
	pru->INTC.HMR1.bit.HINT_MAP_5 = 5; // Channel 5 to Host 5 // EVTOUT3
	pru->INTC.HMR1.bit.HINT_MAP_6 = 6; // Channel 6 to Host 6 // EVTOUT4
	pru->INTC.HMR1.bit.HINT_MAP_7 = 7; // Channel 7 to Host 7 // EVTOUT5
	pru->INTC.HMR2.bit.HINT_MAP_8 = 8; // Channel 8 to Host 8 // EVTOUT6
	pru->INTC.HMR2.bit.HINT_MAP_9 = 9; // Channel 9 to Host 9 // EVTOUT7
	
	// Polarity and type:
	pru->INTC.SIPR0 = 0xFFFFFFFFu;
	pru->INTC.SIPR1 = 0xFFFFFFFFu;
	pru->INTC.SITR0 = 0;
	pru->INTC.SITR1 = 0;
	
	// Clear all pending interrupts
	pru->INTC.ECR0 = 0xFFFFFFFFu;
}
