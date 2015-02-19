#ifndef LHARTMANN_PRU_ICSS_BITFIELDS_H
#define LHARTMANN_PRU_ICSS_BITFIELDS_H

#include <stdint.h>

union pru_CONTROL_reg_t {
	struct {
		unsigned SOFT_RST_N : 1;
		unsigned ENABLE : 1;
		unsigned SLEEPING : 1;
		unsigned COUNTER_ENABLE : 1;
		unsigned : 4; // Reserved
		unsigned SINGLE_STEP : 1;
		unsigned : 5; // Reserved
		unsigned : 1; // Reserved
		unsigned RUNSTATE : 1;
		unsigned PCOUNTER_RST_VAL : 16;
	} bit;
	uint32_t all;
};

union pru_STATUS_reg_t {
	struct {
		unsigned PCOUNTER : 16;
		unsigned : 16; // Reserved
	} bit;
	uint32_t all;
};

union pru_CTBIR0_reg_t {
	struct {
		unsigned C24_BLK_INDEX : 8;
		unsigned : 8; // Reserved
		unsigned C25_BLK_INDEX : 8;
		unsigned : 8; // Reserved
	} bit;
	uint32_t all;
};

union pru_CTBIR1_reg_t {
	struct {
		unsigned C26_BLK_INDEX : 8;
		unsigned : 8; // Reserved
		unsigned C27_BLK_INDEX : 8;
		unsigned : 8; // Reserved
	} bit;
	uint32_t all;
};

union pru_CTPPR0_reg_t {
	struct {
		unsigned C28_POINTER : 16;
		unsigned C29_POINTER : 16;
	} bit;
	uint32_t all;
};

union pru_CTPPR1_reg_t {
	struct {
		unsigned C30_POINTER : 16;
		unsigned C31_POINTER : 16;
	} bit;
	uint32_t all;
};

// Configuration registers
union pru_SYSCFG_reg_t { // page 274
	struct {
		unsigned IDLE_MODE : 2;
		unsigned STANDBY_MODE : 2;
		unsigned STANDBY_INIT : 1;
		unsigned SUB_MWAIT : 1;
	} bit;
	uint32_t all;
};

union pru_GPCFG0_reg_t { // page 275
	struct {
		unsigned PRU0_GPI_MODE : 2;
		unsigned PRU0_GPI_CLK_MODE : 1;
		unsigned PRU0_GPI_DIV0 : 5;
		unsigned PRU0_GPI_DIV1 : 5;
		unsigned PRU0_GPI_SB : 1;
		unsigned PRU0_GPO_MODE : 1;
		unsigned PRU0_GPO_DIV0 : 5;
		unsigned PRU0_GPO_DIV1 : 5;
		unsigned PRU0_GPO_SH_SEL : 1;
	} bit;
	uint32_t all;
};

union pru_GPCFG1_reg_t { // page 277
	struct {
		unsigned PRU1_GPI_MODE : 2;
		unsigned PRU1_GPI_CLK_MODE : 1;
		unsigned PRU1_GPI_DIV0 : 5;
		unsigned PRU1_GPI_DIV1 : 5;
		unsigned PRU1_GPI_SB : 1;
		unsigned PRU1_GPO_MODE : 1;
		unsigned PRU1_GPO_DIV0 : 5;
		unsigned PRU1_GPO_DIV1 : 5;
		unsigned PRU1_GPO_SH_SEL : 1;
	} bit;
	uint32_t all;
};

union pru_CGR_reg_t { // page 279
	struct {
		unsigned PRU0_CLK_STOP_REQ : 1;
		unsigned PRU0_CLK_STOP_ACK : 1;
		unsigned PRU0_CLK_EN       : 1;
		unsigned PRU1_CLK_STOP_REQ : 1;
		unsigned PRU1_CLK_STOP_ACK : 1;
		unsigned PRU1_CLK_EN       : 1;
		unsigned INTC_CLK_STOP_REQ : 1;
		unsigned INTC_CLK_CTOP_ACK : 1;
		unsigned INTC_CLK_EN       : 1;
		unsigned UART_CLK_CTOP_REQ : 1;
		unsigned UART_CLK_STOP_ACK : 1;
		unsigned UART_CLK_EN       : 1;
		unsigned ECAP_CLK_STOP_REQ : 1;
		unsigned ECAP_CLK_STOP_ACK : 1;
		unsigned ECAP_CLK_EN       : 1;
		unsigned IEP_CLK_STOP_REQ  : 1;
		unsigned IEP_CLK_STOP_ACK  : 1;
		unsigned IEP_CLK_EN        : 1;
	} bit;
	uint32_t all;
};

union pru_ISRP_reg_t { // page 281
	struct {
		unsigned PRU0_IMEM_PE_RAW : 4;
		unsigned PRU0_DMEM_PE_RAW : 4;
		unsigned PRU1_IMEM_PE_RAW : 4;
		unsigned PRU1_DMEM_PE_RAW : 4;
		unsigned RAM_PE_RAW       : 4;
	} bit;
	uint32_t all;
};

union pru_ISP_reg_t { // page 282
	struct {
		unsigned PRU0_IMEM_PE : 4;
		unsigned PRU0_DMEM_PE : 4;
		unsigned PRU1_IMEM_PE : 4;
		unsigned PRU1_DMEM_PE : 4;
		unsigned RAM_PE       : 4;
	} bit;
	uint32_t all;
};

union pru_IESP_reg_t { // page 283
	struct {
		unsigned PRU0_IMEM_PE_SET : 4;
		unsigned PRU0_DMEM_PE_SET : 4;
		unsigned PRU1_IMEM_PE_SET : 4;
		unsigned PRU1_DMEM_PE_SET : 4;
		unsigned RAM_PE_SET       : 4;
	} bit;
	uint32_t all;
};

union pru_IECP_reg_t { // page 283
	struct {
		unsigned PRU0_IMEM_PE_CLR : 4;
		unsigned PRU0_DMEM_PE_CLR : 4;
		unsigned PRU1_IMEM_PE_CLR : 4;
		unsigned PRU1_DMEM_PE_CLR : 4;
//		unsigned RAM_PE_CLR       : 4; // TODO: This is not documented, check if exists
	} bit;
	uint32_t all;
};

union pru_PMAO_reg_t { // page 285
	struct {
		unsigned PMAO_PRU0 : 1;
		unsigned PMAO_PRU1 : 1;
	} bit;
	uint32_t all;
};

union pru_MII_RT_reg_t { // page 286
	struct {
		unsigned MII_RT_EVENT_EN : 1;
	} bit;
	uint32_t all;
};

union pru_IEPCLK_reg_t { // page 287
	struct {
		unsigned OCP_EN : 1;
	} bit;
	uint32_t all;
};

union pru_SPP_reg_t { // page 288
	struct {
		unsigned PRU1_PAD_HP_EN : 1;
		unsigned XFR_SHIFT_EN : 1;
	} bit;
	uint32_t all;
};

union pru_PIN_MX_reg_t { // page 289
	struct {
		unsigned PIN_MUX_SEL : 8;
	} bit;
	uint32_t all;
};

#endif
