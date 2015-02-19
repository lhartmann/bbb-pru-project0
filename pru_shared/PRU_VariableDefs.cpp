#include <BBB/pru_icss_structs.h>
#include <BBB/pru_icss_intc_structs.h>

#ifdef __cplusplus
#pragma DATA_SECTION("Pru0ControlRegsFile")
#else
#pragma DATA_SECTION(Pru0ControlRegs,"Pru0ControlRegsFile");
#endif
volatile struct pru_control_frame_t Pru0ControlRegs;

#ifdef __cplusplus
#pragma DATA_SECTION("Pru1ControlRegsFile")
#else
#pragma DATA_SECTION(Pru1ControlRegs,"Pru1ControlRegsFile");
#endif
volatile struct pru_control_frame_t Pru1ControlRegs;

#ifdef __cplusplus
#pragma DATA_SECTION("PruConfigRegsFile")
#else
#pragma DATA_SECTION(PruConfigRegs,"PruConfigRegsFile");
#endif
volatile struct pru_config_frame_t PruConfigRegs;

#ifdef __cplusplus
#pragma DATA_SECTION("PruIntcRegsFile")
#else
#pragma DATA_SECTION(PruIntcRegs,"PruIntcRegsFile");
#endif
volatile struct pru_icss_intc_regs_t PruIntcRegs;
