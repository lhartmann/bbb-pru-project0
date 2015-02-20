#include <pru.h>
#include <PWMSS.h>

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
}
