#ifndef LHARTMANN_PRU_H
#define LHARTMANN_PRU_H

#include <BBB/pru_icss_structs.h>
#include <BBB/pru_icss_intc_structs.h>

extern volatile struct pru_control_frame_t Pru0ControlRegs;
extern volatile struct pru_control_frame_t Pru1ControlRegs;
extern volatile struct pru_config_frame_t PruConfigRegs;
extern volatile struct pru_icss_intc_regs_t PruIntcRegs;

#define pru_wait_host0_interrupt() { \
	register volatile unsigned int __R31; \
	while (!(__R31 & 0x40000000)); \
}

#define pru_wait_host1_interrupt() { \
	register volatile unsigned int __R31; \
	while (!(__R31 & 0x80000000)); \
}

#define pru_trigger_host_interrupt(hostn) { \
	register volatile unsigned int __R31; \
	__R31 = 0x20 + (hostn); \
}

#define HALT() { asm(" HALT"); }

#define PRU0_HOSTN 0
#define PRU1_HOSTN 1
#define ADC_HOSTN  2
#define ARM_HOSTN  3

#endif
