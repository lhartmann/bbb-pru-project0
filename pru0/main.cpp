#include <pru.h>
#include <PWMSS.h>

uint16_t *shared_ram_start = (uint16_t*) 0x10000;
uint16_t *shared_ram_end = shared_ram_start + 12*1024/2;

void main() {
	// Setup EPWM0A
	Pwmss0Regs.CLKCONFIG.bit.ePWMCLK_EN = 1;
	EPwm0Regs.TBCTL.bit.CTRMODE = 2; // Up-down counter
	EPwm0Regs.TBPRD = 10000;
	EPwm0Regs.CMPA.bit.CMPA = 8000;
	EPwm0Regs.AQCTLA.all = 0;
	EPwm0Regs.AQCTLA.bit.CAU = 1; // Clear
	EPwm0Regs.AQCTLA.bit.CAD = 2; // Set
	
	volatile uint8_t *p8 = (uint8_t *)0x10000;
	for (uint16_t i=0x3000; i; i--) {
		p8[i] = i & 0xff;
	}
	
	while (true) {
		uint16_t *p = shared_ram_start;
		while (p != shared_ram_end) {
//			pru_wait_host0_interrupt();
			// Do something...
			*p = p-shared_ram_start;
		}
		pru_trigger_host_interrupt(ARM_HOSTN);
		
		HALT();
	}
}
