// This file is automatically generated by aux/INTC_REGS.sh
#ifndef LHARTMANN_PRU_ICSS_INTC_H
#define LHARTMANN_PRU_ICSS_INTC_H

#include <stdint.h>
#include "pru_icss_intc_bitfields.h"

#define PRU_ICSS_INTC_OFFSET_REVID 0x0u
#define PRU_ICSS_INTC_OFFSET_CR 0x4u
#define PRU_ICSS_INTC_OFFSET_GER 0x10u
#define PRU_ICSS_INTC_OFFSET_GNLR 0x1Cu
#define PRU_ICSS_INTC_OFFSET_SISR 0x20u
#define PRU_ICSS_INTC_OFFSET_SICR 0x24u
#define PRU_ICSS_INTC_OFFSET_EISR 0x28u
#define PRU_ICSS_INTC_OFFSET_EICR 0x2Cu
#define PRU_ICSS_INTC_OFFSET_HIEISR 0x34u
#define PRU_ICSS_INTC_OFFSET_HIDISR 0x38u
#define PRU_ICSS_INTC_OFFSET_GPIR 0x80u
#define PRU_ICSS_INTC_OFFSET_SRSR0 0x200u
#define PRU_ICSS_INTC_OFFSET_SRSR1 0x204u
#define PRU_ICSS_INTC_OFFSET_SECR0 0x280u
#define PRU_ICSS_INTC_OFFSET_SECR1 0x284u
#define PRU_ICSS_INTC_OFFSET_ESR0 0x300u
#define PRU_ICSS_INTC_OFFSET_ERS1 0x304u
#define PRU_ICSS_INTC_OFFSET_ECR0 0x380u
#define PRU_ICSS_INTC_OFFSET_ECR1 0x384u
#define PRU_ICSS_INTC_OFFSET_CMR0 0x400u
#define PRU_ICSS_INTC_OFFSET_CMR1 0x404u
#define PRU_ICSS_INTC_OFFSET_CMR2 0x408u
#define PRU_ICSS_INTC_OFFSET_CMR3 0x40Cu
#define PRU_ICSS_INTC_OFFSET_CMR4 0x410u
#define PRU_ICSS_INTC_OFFSET_CMR5 0x414u
#define PRU_ICSS_INTC_OFFSET_CMR6 0x418u
#define PRU_ICSS_INTC_OFFSET_CMR7 0x41Cu
#define PRU_ICSS_INTC_OFFSET_CMR8 0x420u
#define PRU_ICSS_INTC_OFFSET_CMR9 0x424u
#define PRU_ICSS_INTC_OFFSET_CMR10 0x428u
#define PRU_ICSS_INTC_OFFSET_CMR11 0x42Cu
#define PRU_ICSS_INTC_OFFSET_CMR12 0x430u
#define PRU_ICSS_INTC_OFFSET_CMR13 0x434u
#define PRU_ICSS_INTC_OFFSET_CMR14 0x438u
#define PRU_ICSS_INTC_OFFSET_CMR15 0x43Cu
#define PRU_ICSS_INTC_OFFSET_HMR0 0x800u
#define PRU_ICSS_INTC_OFFSET_HMR1 0x804u
#define PRU_ICSS_INTC_OFFSET_HMR2 0x808u
#define PRU_ICSS_INTC_OFFSET_HIPIR0 0x900u
#define PRU_ICSS_INTC_OFFSET_HIPIR1 0x904u
#define PRU_ICSS_INTC_OFFSET_HIPIR2 0x908u
#define PRU_ICSS_INTC_OFFSET_HIPIR3 0x90Cu
#define PRU_ICSS_INTC_OFFSET_HIPIR4 0x910u
#define PRU_ICSS_INTC_OFFSET_HIPIR5 0x914u
#define PRU_ICSS_INTC_OFFSET_HIPIR6 0x918u
#define PRU_ICSS_INTC_OFFSET_HIPIR7 0x91Cu
#define PRU_ICSS_INTC_OFFSET_HIPIR8 0x920u
#define PRU_ICSS_INTC_OFFSET_HIPIR9 0x924u
#define PRU_ICSS_INTC_OFFSET_SIPR0 0xD00u
#define PRU_ICSS_INTC_OFFSET_SIPR1 0xD04u
#define PRU_ICSS_INTC_OFFSET_SITR0 0xD80u
#define PRU_ICSS_INTC_OFFSET_SITR1 0xD84u
#define PRU_ICSS_INTC_OFFSET_HINLR0 0x1100u
#define PRU_ICSS_INTC_OFFSET_HINLR1 0x1104u
#define PRU_ICSS_INTC_OFFSET_HINLR2 0x1108u
#define PRU_ICSS_INTC_OFFSET_HINLR3 0x110Cu
#define PRU_ICSS_INTC_OFFSET_HINLR4 0x1110u
#define PRU_ICSS_INTC_OFFSET_HINLR5 0x1114u
#define PRU_ICSS_INTC_OFFSET_HINLR6 0x1118u
#define PRU_ICSS_INTC_OFFSET_HINLR7 0x111Cu
#define PRU_ICSS_INTC_OFFSET_HINLR8 0x1120u
#define PRU_ICSS_INTC_OFFSET_HINLR9 0x1124u
#define PRU_ICSS_INTC_OFFSET_HIER 0x1500u

struct pru_icss_intc_regs_t {
	pru_icss_intc_REVID_reg_t REVID;
	pru_icss_intc_CR_reg_t CR;
	uint8_t _rsvd_8[8];
	pru_icss_intc_GER_reg_t GER;
	uint8_t _rsvd_20[8];
	pru_icss_intc_GNLR_reg_t GNLR;
	pru_icss_intc_SISR_reg_t SISR;
	pru_icss_intc_SICR_reg_t SICR;
	pru_icss_intc_EISR_reg_t EISR;
	pru_icss_intc_EICR_reg_t EICR;
	uint8_t _rsvd_48[4];
	pru_icss_intc_HIEISR_reg_t HIEISR;
	pru_icss_intc_HIDISR_reg_t HIDISR;
	uint8_t _rsvd_60[68];
	pru_icss_intc_GPIR_reg_t GPIR;
	uint8_t _rsvd_132[380];
	uint32_t SRSR0;
	uint32_t SRSR1;
	uint8_t _rsvd_520[120];
	uint32_t SECR0;
	uint32_t SECR1;
	uint8_t _rsvd_648[120];
	uint32_t ESR0;
	uint32_t ERS1;
	uint8_t _rsvd_776[120];
	uint32_t ECR0;
	uint32_t ECR1;
	uint8_t _rsvd_904[120];
	pru_icss_intc_CMR0_reg_t CMR0;
	pru_icss_intc_CMR1_reg_t CMR1;
	pru_icss_intc_CMR2_reg_t CMR2;
	pru_icss_intc_CMR3_reg_t CMR3;
	pru_icss_intc_CMR4_reg_t CMR4;
	pru_icss_intc_CMR5_reg_t CMR5;
	pru_icss_intc_CMR6_reg_t CMR6;
	pru_icss_intc_CMR7_reg_t CMR7;
	pru_icss_intc_CMR8_reg_t CMR8;
	pru_icss_intc_CMR9_reg_t CMR9;
	pru_icss_intc_CMR10_reg_t CMR10;
	pru_icss_intc_CMR11_reg_t CMR11;
	pru_icss_intc_CMR12_reg_t CMR12;
	pru_icss_intc_CMR13_reg_t CMR13;
	pru_icss_intc_CMR14_reg_t CMR14;
	pru_icss_intc_CMR15_reg_t CMR15;
	uint8_t _rsvd_1088[960];
	pru_icss_intc_HMR0_reg_t HMR0;
	pru_icss_intc_HMR1_reg_t HMR1;
	pru_icss_intc_HMR2_reg_t HMR2;
	uint8_t _rsvd_2060[244];
	pru_icss_intc_HIPIR0_reg_t HIPIR0;
	pru_icss_intc_HIPIR1_reg_t HIPIR1;
	pru_icss_intc_HIPIR2_reg_t HIPIR2;
	pru_icss_intc_HIPIR3_reg_t HIPIR3;
	pru_icss_intc_HIPIR4_reg_t HIPIR4;
	pru_icss_intc_HIPIR5_reg_t HIPIR5;
	pru_icss_intc_HIPIR6_reg_t HIPIR6;
	pru_icss_intc_HIPIR7_reg_t HIPIR7;
	pru_icss_intc_HIPIR8_reg_t HIPIR8;
	pru_icss_intc_HIPIR9_reg_t HIPIR9;
	uint8_t _rsvd_2344[984];
	uint32_t SIPR0;
	uint32_t SIPR1;
	uint8_t _rsvd_3336[120];
	uint32_t SITR0;
	uint32_t SITR1;
	uint8_t _rsvd_3464[888];
	pru_icss_intc_HINLR0_reg_t HINLR0;
	pru_icss_intc_HINLR1_reg_t HINLR1;
	pru_icss_intc_HINLR2_reg_t HINLR2;
	pru_icss_intc_HINLR3_reg_t HINLR3;
	pru_icss_intc_HINLR4_reg_t HINLR4;
	pru_icss_intc_HINLR5_reg_t HINLR5;
	pru_icss_intc_HINLR6_reg_t HINLR6;
	pru_icss_intc_HINLR7_reg_t HINLR7;
	pru_icss_intc_HINLR8_reg_t HINLR8;
	pru_icss_intc_HINLR9_reg_t HINLR9;
	uint8_t _rsvd_4392[984];
	pru_icss_intc_HIER_reg_t HIER;
};

#endif
