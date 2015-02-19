// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: nov-2014 - Filipe Belo
// Licensed under GPLv3+

#ifndef FILIPEBELO_PWMSS_ECAP_BITFIELDS_H
#define FILIPEBELO_PWMSS_ECAP_BITFIELDS_H

#include <stdint.h>

union PWMSS_ECAP_ECCTL1_reg_t {
	struct {
		unsigned CAP1POL : 1;
		unsigned CTRRST1 : 1;
		unsigned CAP2POL : 1;
		unsigned CTRRST2 : 1;
		unsigned CAP3POL : 1;
		unsigned CTRRST3 : 1;
		unsigned CAP4POL : 1;
		unsigned CTRRST4 : 1;
		unsigned CAPLDEN : 1;
		unsigned PRESCALE : 5;
		unsigned FREE_SOFT : 2;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_ECAP_ECCTL2_reg_t {
	struct {
		unsigned CONT_ONESHT : 1;
		unsigned STOP_WRAP : 2;
		unsigned REARM : 1;
		unsigned TSCTRSTOP : 1;
		unsigned SYNCI_EN : 1;
		unsigned SYNCO_SEL : 2;
		unsigned SWSYNC : 1;
		unsigned CAP_APWM : 1;
		unsigned APWMPOL : 1;
		unsigned : 5;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_ECAP_ECEINT_reg_t {
	struct {
		unsigned Reserved : 1;
		unsigned CEVT1 : 1;
		unsigned CEVT2 : 1;
		unsigned CEVT3 : 1;
		unsigned CEVT4 : 1;
		unsigned CNTOVF : 1;
		unsigned PRDEQ : 1;
		unsigned CMPEQ : 1;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_ECAP_ECFLG_reg_t {
	struct {
		unsigned INT : 1;
		unsigned CEVT1 : 1;
		unsigned CEVT2 : 1;
		unsigned CEVT3 : 1;
		unsigned CEVT4 : 1;
		unsigned CNTOVF : 1;
		unsigned PRDEQ : 1;
		unsigned CMPEQ : 1;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_ECAP_ECCLR_reg_t {
	struct {
		unsigned INT : 1;
		unsigned CEVT1 : 1;
		unsigned CEVT2 : 1;
		unsigned CEVT3 : 1;
		unsigned CEVT4 : 1;
		unsigned CNTOVF : 1;
		unsigned PRDEQ : 1;
		unsigned CMPEQ : 1;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

union PWMSS_ECAP_ECFRC_reg_t {
	struct {
		unsigned : 1;
		unsigned CEVT1 : 1;
		unsigned CEVT2 : 1;
		unsigned CEVT3 : 1;
		unsigned CEVT4 : 1;
		unsigned CNTOVF : 1;
		unsigned PRDEQ : 1;
		unsigned CMPEQ : 1;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};

#endif
