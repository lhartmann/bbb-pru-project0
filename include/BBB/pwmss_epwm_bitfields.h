// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: nov-2014 - Filipe Belo
// Licensed under GPLv3+

#ifndef FILIPEBELO_PWMSS_EPWM_BITFIELDS_H
#define FILIPEBELO_PWMSS_EPWM_BITFIELDS_H

#include <stdint.h>

union PWMSS_EPWM_TBCTL_reg_t {
	struct {
		unsigned CTRMODE : 2;
		unsigned PHSEN : 1;
		unsigned PRDLD : 1;
		unsigned SYNCOSEL : 2;
		unsigned SWFSYNC : 1;
		unsigned HSPCLKDIV : 3;
		unsigned CLKDIV : 3;
		unsigned PHSDIR : 1;
		unsigned FREE_SOFT : 2;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TBSTS_reg_t {
	struct {
		unsigned CTRDIR : 1;
		unsigned SYNCI : 1;
		unsigned CTRMAX : 1;
		unsigned : 13;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TBPHSHR_reg_t {
	struct {
		unsigned : 8;
		unsigned TBPHSH : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_CMPCTL_reg_t {
	struct {
		unsigned LOADAMODE : 2;
		unsigned LOADBMODE : 2;
		unsigned SHDWAMODE : 1;
		unsigned : 1;
		unsigned SHDWBMODE : 1;
		unsigned : 1;
		unsigned SHDWAFULL : 1;
		unsigned SHDWBFULL : 1;
		unsigned : 6;		
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_CMPAHR_reg_t {
	struct {
		unsigned : 8;
		unsigned CMPAHR : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_CMPA_reg_t {
	struct {
		unsigned CMPA : 16;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_CMPB_reg_t {
	struct {
		unsigned CMPB : 16;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};



union PWMSS_EPWM_AQCTLA_reg_t {
	struct {
		unsigned ZRO : 2;
		unsigned PRD : 2;
		unsigned CAU : 2;
		unsigned CAD : 2;
		unsigned CBU : 2;
		unsigned CBD : 2;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_AQCTLB_reg_t {
	struct {
		unsigned ZRO : 2;
		unsigned PRD : 2;
		unsigned CAU : 2;
		unsigned CAD : 2;
		unsigned CBU : 2;
		unsigned CBD : 2;
		unsigned : 4;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_AQSFRC_reg_t {
	struct {
		unsigned ACTSFA : 2;
		unsigned OTSFA : 1;
		unsigned ACTSFB : 2;
		unsigned OTSFB : 1;
		unsigned RLDCSF : 2;
		unsigned : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_AQCSFRC_reg_t {
	struct {
		unsigned CSFA : 2;
		unsigned CSFB : 2;
		unsigned : 12;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_DBCTL_reg_t {
	struct {
		unsigned OUT_MODE : 2;
		unsigned POLSEL : 2;
		unsigned IN_MODE : 2;
		unsigned : 10;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_DBRED_reg_t {
	struct {
		unsigned DEL : 10;
		unsigned : 6;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_DBFED_reg_t {
	struct {
		unsigned DEL : 10;
		unsigned : 6;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZSEL_reg_t {
	struct {
		unsigned CBCn : 8;
		unsigned OSHTn : 8;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZCTL_reg_t {
	struct {
		unsigned TZA : 2;
		unsigned TZB : 2;
		unsigned : 12;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZEINT_reg_t {
	struct {
		unsigned : 1;
		unsigned CBC : 1;
		unsigned OST : 1;
		unsigned : 13;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZFLG_reg_t {
	struct {
		unsigned INT : 1;
		unsigned CBC : 1;
		unsigned OST : 1;
		unsigned : 13;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZCLR_reg_t {
	struct {
		unsigned INT : 1;
		unsigned CBC : 1;
		unsigned OST : 1;
		unsigned : 13;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_TZFRC_reg_t {
	struct {
		unsigned : 1;
		unsigned CBC : 1;
		unsigned OST : 1;
		unsigned : 13;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_ETSEL_reg_t {
	struct {
		unsigned INTSEL : 3;
		unsigned INTEN : 1;
		unsigned : 12;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_ETPS_reg_t {
	struct {
		unsigned INTPRD : 2;
		unsigned INTCNT : 2;
		unsigned : 12;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_ETFLG_reg_t {
	struct {
		unsigned INT : 1;
		unsigned : 15;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_ETCLR_reg_t {
	struct {
		unsigned INT : 1;
		unsigned : 15;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_ETFRC_reg_t {
	struct {
		unsigned INT : 1;
		unsigned : 15;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_PCCTL_reg_t {
	struct {
		unsigned CHPEN : 1;
		unsigned OSHTWTH : 4;
		unsigned CHPFREQ : 3;
		unsigned CHPDUTY : 3;
		unsigned : 5;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


union PWMSS_EPWM_HRCTL_reg_t {
	struct {
		unsigned DELMODE : 2;
		unsigned DELBUSSEL : 1;
		unsigned PULSESEL : 1;
		unsigned : 12;
	} __attribute__ ((__packed__)) bit;
	uint16_t all;
};


#endif
