#ifndef LHARTMANN_PRU_ICSS_STRUCTS_H
#define LHARTMANN_PRU_ICSS_STRUCTS_H

#include <stdint.h>
#include <BBB/pru_icss_intc_structs.h>
#include <BBB/pru_icss_bitfields.h>

struct pru_control_frame_t { // PRUSS_PRU_CTRL_REGISTERS
	pru_CONTROL_reg_t CONTROL;
	pru_STATUS_reg_t STATUS;
	uint32_t WAKEUP_EN;
	uint32_t CYCLE;
	uint32_t STALL;
	pru_CTBIR0_reg_t CTBIR0;
	pru_CTBIR1_reg_t CTBIR1;
	pru_CTPPR0_reg_t CTPPR0;
	pru_CTPPR1_reg_t CTPPR1;
};

struct pru_debug_frame_t {
	uint32_t GPREG[32];
	uint32_t CTREG[32];
};

struct pru_config_frame_t { // page 272
	uint32_t         REVID;
	pru_SYSCFG_reg_t SYSCFG;
	pru_GPCFG0_reg_t GPCFG0;
	pru_GPCFG1_reg_t GPCFG1;
	pru_CGR_reg_t    CGR;
	pru_ISRP_reg_t   ISRP;
	pru_ISP_reg_t    ISP;
	pru_IESP_reg_t   IESP;
	pru_IECP_reg_t   IECP;
	uint32_t         _rsvd1;
	pru_PMAO_reg_t   PMAO;
	pru_MII_RT_reg_t MII_RT;
	pru_IEPCLK_reg_t IEPCLK;
	pru_SPP_reg_t    SPP;
	uint32_t         _rsvd2;
	uint32_t         _rsvd3;
	pru_PIN_MX_reg_t PIN_MX;
};

#endif
