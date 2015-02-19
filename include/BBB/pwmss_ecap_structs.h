// This file is automatically generated by aux/PWMSS_REGS.sh
#ifndef FILIPEBELO_PWMSS_ECAP_H
#define FILIPEBELO_PWMSS_ECAP_H

#include <stdint.h>
#include "pwmss_ecap_bitfields.h"

#define PWMSS_ECAP_OFFSET_TSCTR 0x0u
#define PWMSS_ECAP_OFFSET_CTRPHS 0x4u
#define PWMSS_ECAP_OFFSET_CAP1 0x8u
#define PWMSS_ECAP_OFFSET_CAP2 0xCu
#define PWMSS_ECAP_OFFSET_CAP3 0x10u
#define PWMSS_ECAP_OFFSET_CAP4 0x14u
#define PWMSS_ECAP_OFFSET_ECCTL1 0x28u
#define PWMSS_ECAP_OFFSET_ECCTL2 0x2Au
#define PWMSS_ECAP_OFFSET_ECEINT 0x2Cu
#define PWMSS_ECAP_OFFSET_ECFLG 0x2Eu
#define PWMSS_ECAP_OFFSET_ECCLR 0x30u
#define PWMSS_ECAP_OFFSET_ECFRC 0x32u
#define PWMSS_ECAP_OFFSET_REVID 0x5Cu

struct pwmss_ecap_regs_t {
	uint32_t TSCTR;
	uint32_t CTRPHS;
	uint32_t CAP1;
	uint32_t CAP2;
	uint32_t CAP3;
	uint32_t CAP4;
	uint8_t _rsvd_24[16];
	PWMSS_ECAP_ECCTL1_reg_t ECCTL1;
	PWMSS_ECAP_ECCTL2_reg_t ECCTL2;
	PWMSS_ECAP_ECEINT_reg_t ECEINT;
	PWMSS_ECAP_ECFLG_reg_t ECFLG;
	PWMSS_ECAP_ECCLR_reg_t ECCLR;
	PWMSS_ECAP_ECFRC_reg_t ECFRC;
	uint8_t _rsvd_52[40];
	uint32_t REVID;
};

#endif
