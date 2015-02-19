#ifndef LHARTMANN_PRU_H
#define LHARTMANN_PRU_H

#include <BBB/pru_icss_structs.h>
#include <BBB/pru_icss_intc_structs.h>

extern volatile struct pru_control_frame_t Pru0ControlRegs;
extern volatile struct pru_control_frame_t Pru1ControlRegs;
extern volatile struct pru_config_frame_t PruConfigRegs;
extern volatile struct pru_icss_intc_regs_t PruIntcRegs;

#endif
