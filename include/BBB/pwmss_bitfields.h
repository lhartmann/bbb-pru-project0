// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: nov-2014 - Filipe Belo
// Licensed under GPLv3+

#ifndef FILIPEBELO_PWMSS_BITFIELDS_H
#define FILIPEBELO_PWMSS_BITFIELDS_H

#include <stdint.h>

union PWMSS_IDVER_reg_t {
	struct {
		unsigned Y_MINOR : 6;
		unsigned CUSTOM : 2;
		unsigned X_MAJOR : 3;
		unsigned R_RTL : 5;
		unsigned FUNC : 12;
		unsigned : 2;
		unsigned SCHEME : 2;
	} bit;
	uint32_t all;
};


union PWMSS_SYSCONFIG_reg_t {
	struct {
		unsigned SOFTRESET : 1;
		unsigned FREEEMU : 1;
		unsigned IDLEMODE : 2;
		unsigned STANDBYMODE : 2;
		unsigned : 26;
	} bit;
	uint32_t all;
};


union PWMSS_CLKCONFIG_reg_t {
	struct {
		unsigned eCAPCLK_EN : 1;
		unsigned eCAPCLKSTOP_REQ : 1;
		unsigned : 2;
		unsigned eQEPCLK_EN : 1;
		unsigned eQEPCLKSTOP_REQ : 1;
		unsigned : 2;
		unsigned ePWMCLK_EN : 1;
		unsigned ePWMCLKSTOP_REQ : 1;
		unsigned : 22;
	} bit;
	uint32_t all;
};


union PWMSS_CLKSTATUS_reg_t {
	struct {
		unsigned eCAP_CLK_EN_ACK : 1;
		unsigned eCAP_CLKSTOP_ACK : 1;
		unsigned : 2;
		unsigned eQEP_CLK_EN_ACK : 1;
		unsigned eQEP_CLKSTOP_ACK : 1;
		unsigned : 2;
		unsigned ePWM_CLK_EN_ACK : 1;
		unsigned ePWM_CLKSTOP_ACK : 1;
		unsigned : 22;
	} bit;
	uint32_t all;
};

#endif

