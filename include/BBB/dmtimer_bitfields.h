#ifndef LHARTMANN_DMTIMER_BITFIELDS_H
#define LHARTMANN_DMTIMER_BITFIELDS_H

#include <stdint.h>

union DMTIMER_TIDR_reg_t {
	struct {
		unsigned Y_MINOR : 6;
		unsigned CUSTOM : 2;
		unsigned X_MAJOR : 3;
		unsigned R_RTL : 5;
		unsigned FUNC : 12;
		unsigned Reserved : 2;
		unsigned SCHEME : 2;
	} bit;
	uint32_t all;
};


union DMTIMER_TIOCP_CFG_reg_t {
	struct {
		unsigned SOFTRESET : 1;
		unsigned EMUFREE : 1;
		unsigned IDLEMODE : 2;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQ_EOI_reg_t {
	struct {
		unsigned DMAEvent_Ack : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQSTATUS_RAW_reg_t {
	struct {
		unsigned MAT_IT_FLAG : 1;
		unsigned OVF_IT_FLAG : 1;
		unsigned TCAR_IT_FLAG : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQSTATUS_reg_t {
	struct {
		unsigned MAT_IT_FLAG : 1;
		unsigned OVF_IT_FLAG : 1;
		unsigned TCAR_IT_FLAG : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQENABLE_SET_reg_t {
	struct {
		unsigned MAT_EN_FLAG : 1;
		unsigned OVF_EN_FLAG : 1;
		unsigned TCAR_EN_FLAG : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQENABLE_CLR_reg_t {
	struct {
		unsigned MAT_EN_FLAG : 1;
		unsigned OVF_EN_FLAG : 1;
		unsigned TCAR_EN_FLAG : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_IRQWAKEEN_reg_t {
	struct {
		unsigned MAT_WUP_ENA : 1;
		unsigned OVF_WUP_ENA : 1;
		unsigned TCAR_WUP_ENA : 1;
	} bit;
	uint32_t all;
};

union DMTIMER_TCLR_reg_t {
	struct {
		unsigned ST : 1;
		unsigned AR : 1;
		unsigned PTV : 3;
		unsigned PRE : 1;
		unsigned CE : 1;
		unsigned SCPWM : 1;
		unsigned TCM : 2;
		unsigned TRG : 2;
		unsigned PT : 1;
		unsigned CAPT_MODE : 1;
		unsigned GPO_CFG : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_TWPS_reg_t {
	struct {
		unsigned W_PEND_TCLR : 1;
		unsigned W_PEND_TCRR : 1;
		unsigned W_PEND_TLDR : 1;
		unsigned W_PEND_TTGR : 1;
		unsigned W_PEND_TMAR : 1;
	} bit;
	uint32_t all;
};


union DMTIMER_TSICR_reg_t {
	struct {
		unsigned Reserved : 1;
		unsigned SFT : 1;
		unsigned POSTED : 1;
	} bit;
	uint32_t all;
};

#endif
