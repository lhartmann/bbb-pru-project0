// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: nov-2014 - Filipe Belo
// Licensed under GPLv3+

#ifndef FILIPEBELO_PWMSS_EQEP_BITFIELDS_H
#define FILIPEBELO_PWMSS_EQEP_BITFIELDS_H

#include <stdint.h>

union PWMSS_EQEP_QDECCTL_reg_t {
	struct {
		unsigned : 5;
		unsigned QSP : 1;
		unsigned QIP : 1;
		unsigned QBP : 1;
		unsigned QAP : 1;
		unsigned IGATE : 1;
		unsigned SWAP : 1;
		unsigned XCR : 1;
		unsigned SPSEL : 1;
		unsigned SOEN : 1;
		unsigned QSRC : 2;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QEPCTL_reg_t {
	struct {
		unsigned WDE : 1;
		unsigned UTE : 1;
		unsigned QCLM : 1;
		unsigned PHEN : 1;
		unsigned IEL : 2;
		unsigned SEL : 1;
		unsigned SWI : 1;
		unsigned IEI : 2;
		unsigned SEI : 2;
		unsigned PCRM : 2;
		unsigned FREE_SOFT : 2;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QCAPCTL_reg_t {
	struct {
		unsigned UPPS : 4;
		unsigned CCPS : 3;
		unsigned : 8;
		unsigned CEN : 1;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QPOSCTL_reg_t {
	struct {
		unsigned PCSPW : 12;
		unsigned PCE : 1;
		unsigned PCPOL : 1;
		unsigned PCLOAD : 1;
		unsigned PCSHDW : 1;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QEINT_reg_t {
	struct {
		unsigned : 1;
		unsigned PCE : 1;
		unsigned PHE : 1;
		unsigned QDC : 1;
		unsigned WTO : 1;
		unsigned PCU : 1;
		unsigned PCO : 1;
		unsigned PCR : 1;
		unsigned PCM : 1;
		unsigned SEL : 1;
		unsigned IEL : 1;
		unsigned UTO : 1;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QFLG_reg_t {
	struct {
		unsigned INT : 1;
		unsigned PCE : 1;
		unsigned PHE : 1;
		unsigned QDC : 1;
		unsigned WTO : 1;
		unsigned PCU : 1;
		unsigned PCO : 1;
		unsigned PCR : 1;
		unsigned PCM : 1;
		unsigned SEL : 1;
		unsigned IEL : 1;
		unsigned UTO : 1;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QCLR_reg_t {
	struct {
		unsigned INT : 1;
		unsigned PCE : 1;
		unsigned PHE : 1;
		unsigned QDC : 1;
		unsigned WTO : 1;
		unsigned PCU : 1;
		unsigned PCO : 1;
		unsigned PCR : 1;
		unsigned PCM : 1;
		unsigned SEL : 1;
		unsigned IEL : 1;
		unsigned UTO : 1;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QFRC_reg_t {
	struct {
		unsigned : 1;
		unsigned PCE : 1;
		unsigned PHE : 1;
		unsigned QDC : 1;
		unsigned WTO : 1;
		unsigned PCU : 1;
		unsigned PCO : 1;
		unsigned PCR : 1;
		unsigned PCM : 1;
		unsigned SEL : 1;
		unsigned IEL : 1;
		unsigned UTO : 1;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_EQEP_QEPSTS_reg_t {
	struct {
		unsigned PCEF : 1;
		unsigned FIMF : 1;
		unsigned CDEF : 1;
		unsigned COEF : 1;
		unsigned QDLF : 1;
		unsigned QDF : 1;
		unsigned FDF : 1;
		unsigned UPEVNT : 1;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

#endif
