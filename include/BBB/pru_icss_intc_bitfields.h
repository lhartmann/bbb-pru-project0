// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: may-2014 - Lucas Hartmann
// Licensed under GPLv3+

#ifndef LHARTMANN_PRU_ICSS_INTC_NITFIELDS_H
#define LHARTMANN_PRU_ICSS_INTC_NITFIELDS_H

#include <stdint.h>

union pru_icss_intc_REVID_reg_t {
	struct {
		unsigned REV_MINOR : 6;
		unsigned REV_CUSTOM : 2;
		unsigned REV_MAJOR : 3;
		unsigned REV_RTL : 5;
		unsigned REV_MODULE : 12;
		unsigned _rsvd_0 : 2;
		unsigned REV_SCHEME : 2;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CR_reg_t {
	struct {
		unsigned _rsvd_0 : 2;
		unsigned NEST_MODE : 2;
	} bit;
	uint32_t all;
};

union pru_icss_intc_GER_reg_t {
	struct {
		unsigned ENABLE_HINT_ANY : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_GNLR_reg_t {
	struct {
		unsigned GLB_NEST_LEVEL : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_SISR_reg_t {
	struct {
		unsigned STATUS_SET_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_SICR_reg_t {
	struct {
		unsigned STATUS_CLR_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_EISR_reg_t {
	struct {
		unsigned ENABLE_SET_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_EICR_reg_t {
	struct {
		unsigned ENABLE_CLR_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIEISR_reg_t {
	struct {
		unsigned HINT_ENABLE_SET_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIDISR_reg_t {
	struct {
		unsigned HINT_ENABLE_CLR_INDEX : 10;
	} bit;
	uint32_t all;
};

union pru_icss_intc_GPIR_reg_t {
	struct {
		unsigned GLB_PRI_INTR : 10;
		unsigned _rsvd_0 : 21;
		unsigned GLB_NONE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR0_reg_t {
	struct {
		unsigned CH_MAP_0 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_1 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_2 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_3 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR1_reg_t {
	struct {
		unsigned CH_MAP_4 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_5 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_6 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_7 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR2_reg_t {
	struct {
		unsigned CH_MAP_8 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_9 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_10 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_11 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR3_reg_t {
	struct {
		unsigned CH_MAP_12 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_13 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_14 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_15 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR4_reg_t {
	struct {
		unsigned CH_MAP_16 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_17 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_18 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_19 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR5_reg_t {
	struct {
		unsigned CH_MAP_20 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_21 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_22 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_23 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR6_reg_t {
	struct {
		unsigned CH_MAP_24 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_25 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_26 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_27 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR7_reg_t {
	struct {
		unsigned CH_MAP_28 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_29 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_30 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_31 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR8_reg_t {
	struct {
		unsigned CH_MAP_32 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_33 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_34 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_35 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR9_reg_t {
	struct {
		unsigned CH_MAP_36 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_37 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_38 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_39 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR10_reg_t {
	struct {
		unsigned CH_MAP_40 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_41 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_42 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_43 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR11_reg_t {
	struct {
		unsigned CH_MAP_44 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_45 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_46 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_47 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR12_reg_t {
	struct {
		unsigned CH_MAP_48 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_49 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_50 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_51 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR13_reg_t {
	struct {
		unsigned CH_MAP_52 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_53 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_54 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_55 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR14_reg_t {
	struct {
		unsigned CH_MAP_56 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_57 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_58 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_59 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_CMR15_reg_t {
	struct {
		unsigned CH_MAP_60 : 4;
		unsigned _rsvd_2 : 4;
		unsigned CH_MAP_61 : 4;
		unsigned _rsvd_1 : 4;
		unsigned CH_MAP_62 : 4;
		unsigned _rsvd_0 : 4;
		unsigned CH_MAP_63 : 4;
	} bit;
	uint32_t all;
};
 
union pru_icss_intc_HMR0_reg_t {
	struct {
		unsigned HINT_MAP_0 : 4;
		unsigned _rsvd_2 : 4;
		unsigned HINT_MAP_1 : 4;
		unsigned _rsvd_1 : 4;
		unsigned HINT_MAP_2 : 4;
		unsigned _rsvd_0 : 4;
		unsigned HINT_MAP_3 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HMR1_reg_t {
	struct {
		unsigned HINT_MAP_4 : 4;
		unsigned _rsvd_2 : 4;
		unsigned HINT_MAP_5 : 4;
		unsigned _rsvd_1 : 4;
		unsigned HINT_MAP_6 : 4;
		unsigned _rsvd_0 : 4;
		unsigned HINT_MAP_7 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HMR2_reg_t {
	struct {
		unsigned HINT_MAP_8 : 4;
		unsigned _rsvd_0 : 4;
		unsigned HINT_MAP_9 : 4;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR0_reg_t {
	struct {
		unsigned PRI_HINT_0 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_0 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR1_reg_t {
	struct {
		unsigned PRI_HINT_1 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_1 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR2_reg_t {
	struct {
		unsigned PRI_HINT_2 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_2 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR3_reg_t {
	struct {
		unsigned PRI_HINT_3 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_3 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR4_reg_t {
	struct {
		unsigned PRI_HINT_4 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_4 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR5_reg_t {
	struct {
		unsigned PRI_HINT_5 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_5 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR6_reg_t {
	struct {
		unsigned PRI_HINT_6 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_6 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR7_reg_t {
	struct {
		unsigned PRI_HINT_7 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_7 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR8_reg_t {
	struct {
		unsigned PRI_HINT_8 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_8 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIPIR9_reg_t {
	struct {
		unsigned PRI_HINT_9 : 10;
		unsigned _rsvd_0 : 21;
		unsigned NONE_HINT_9 : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR0_reg_t {
	struct {
		unsigned NEST_HINT_0 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR1_reg_t {
	struct {
		unsigned NEST_HINT_1 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR2_reg_t {
	struct {
		unsigned NEST_HINT_2 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR3_reg_t {
	struct {
		unsigned NEST_HINT_3 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR4_reg_t {
	struct {
		unsigned NEST_HINT_4 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR5_reg_t {
	struct {
		unsigned NEST_HINT_5 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR6_reg_t {
	struct {
		unsigned NEST_HINT_6 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR7_reg_t {
	struct {
		unsigned NEST_HINT_7 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR8_reg_t {
	struct {
		unsigned NEST_HINT_8 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HINLR9_reg_t {
	struct {
		unsigned NEST_HINT_9 : 9;
		unsigned _rsvd_0 : 22;
		unsigned AUTO_OVERRIDE : 1;
	} bit;
	uint32_t all;
};

union pru_icss_intc_HIER_reg_t {
	struct {
		unsigned ENABLE_HINT : 10;
	} bit;
	uint32_t all;
};

#endif
