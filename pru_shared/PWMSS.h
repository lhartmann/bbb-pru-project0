#ifndef LHARTMANN_PWMSS_H
#define LHARTMANN_PWMSS_H

#include <BBB/pwmss_structs.h>
#include <BBB/pwmss_epwm_structs.h>
#include <BBB/pwmss_ecap_structs.h>
#include <BBB/pwmss_eqep_structs.h>

extern volatile far struct pwmss_regs_t Pwmss0Regs;
extern volatile far struct pwmss_regs_t Pwmss1Regs;
extern volatile far struct pwmss_regs_t Pwmss2Regs;
extern volatile far struct pwmss_epwm_regs_t EPwm0Regs;
extern volatile far struct pwmss_epwm_regs_t EPwm1Regs;
extern volatile far struct pwmss_epwm_regs_t EPwm2Regs;
extern volatile far struct pwmss_ecap_regs_t ECap0Regs;
extern volatile far struct pwmss_ecap_regs_t ECap1Regs;
extern volatile far struct pwmss_ecap_regs_t ECap2Regs;
extern volatile far struct pwmss_eqep_regs_t EQep0Regs;
extern volatile far struct pwmss_eqep_regs_t EQep1Reg;
extern volatile far struct pwmss_eqep_regs_t EQep2Reg;

#endif
