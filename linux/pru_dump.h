#define pru_dump(out,Y,n)  { pru_indent(out,n); (out) << #Y " = "; pru_dump_val(out,Y,n); }
#define pru_dumpX(out,Y,n) { pru_indent(out,n); (out) << #Y " = "; pru_dump_val(out,X.Y,n); }

inline void pru_indent(ostream &out, uint32_t n) { while (n--) out<<"  "; }
inline void pru_dump_val(ostream &out, uint32_t Y, uint32_t n) { out << hex << (Y) <<endl; }

// -BF-int8_t-
// -BF-int16_t-
// -BF-int32_t-
// -BF-int64_t-
// -BF-uint8_t-
// -BF-uint16_t-
// -BF-uint32_t-
// -BF-uint64_t-
// -BF-int_least8_t-
// -BF-int_least16_t-
// -BF-int_least32_t-
// -BF-int_least64_t-
// -BF-uint_least8_t-
// -BF-uint_least16_t-
// -BF-uint_least32_t-
// -BF-uint_least64_t-
// -BF-int_fast8_t-
// -BF-int_fast16_t-
// -BF-int_fast32_t-
// -BF-int_fast64_t-
// -BF-uint_fast8_t-
// -BF-uint_fast16_t-
// -BF-uint_fast32_t-
// -BF-uint_fast64_t-
// -BF-intptr_t-
// -BF-uintptr_t-
// -BF-intmax_t-
// -BF-uintmax_t-
// -SS-pru_icss_intc_REVID_reg_t-
// -SS--
// -BF-REV_MINOR-
// -BF-REV_CUSTOM-
// -BF-REV_MAJOR-
// -BF-REV_RTL-
// -BF-REV_MODULE-
// -BF-REV_SCHEME-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_REVID_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.REV_MINOR, n+1);
	pru_dumpX(out, bit.REV_CUSTOM, n+1);
	pru_dumpX(out, bit.REV_MAJOR, n+1);
	pru_dumpX(out, bit.REV_RTL, n+1);
	pru_dumpX(out, bit.REV_MODULE, n+1);
	pru_dumpX(out, bit.REV_SCHEME, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CR_reg_t-
// -SS--
// -BF-NEST_MODE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_MODE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_GER_reg_t-
// -SS--
// -BF-ENABLE_HINT_ANY-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_GER_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.ENABLE_HINT_ANY, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_GNLR_reg_t-
// -SS--
// -BF-GLB_NEST_LEVEL-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_GNLR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.GLB_NEST_LEVEL, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SISR_reg_t-
// -SS--
// -BF-STATUS_SET_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SISR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.STATUS_SET_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SICR_reg_t-
// -SS--
// -BF-STATUS_CLR_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SICR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.STATUS_CLR_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_EISR_reg_t-
// -SS--
// -BF-ENABLE_SET_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_EISR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.ENABLE_SET_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_EICR_reg_t-
// -SS--
// -BF-ENABLE_CLR_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_EICR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.ENABLE_CLR_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIEISR_reg_t-
// -SS--
// -BF-HINT_ENABLE_SET_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIEISR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.HINT_ENABLE_SET_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIDISR_reg_t-
// -SS--
// -BF-HINT_ENABLE_CLR_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIDISR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.HINT_ENABLE_CLR_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_GPIR_reg_t-
// -SS--
// -BF-GLB_PRI_INTR-
// -BF-GLB_NONE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_GPIR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.GLB_PRI_INTR, n+1);
	pru_dumpX(out, bit.GLB_NONE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR0_reg_t-
// -SS--
// -BF-CH_MAP_0-
// -BF-CH_MAP_1-
// -BF-CH_MAP_2-
// -BF-CH_MAP_3-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_0, n+1);
	pru_dumpX(out, bit.CH_MAP_1, n+1);
	pru_dumpX(out, bit.CH_MAP_2, n+1);
	pru_dumpX(out, bit.CH_MAP_3, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR1_reg_t-
// -SS--
// -BF-CH_MAP_4-
// -BF-CH_MAP_5-
// -BF-CH_MAP_6-
// -BF-CH_MAP_7-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_4, n+1);
	pru_dumpX(out, bit.CH_MAP_5, n+1);
	pru_dumpX(out, bit.CH_MAP_6, n+1);
	pru_dumpX(out, bit.CH_MAP_7, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR2_reg_t-
// -SS--
// -BF-CH_MAP_8-
// -BF-CH_MAP_9-
// -BF-CH_MAP_10-
// -BF-CH_MAP_11-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR2_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_8, n+1);
	pru_dumpX(out, bit.CH_MAP_9, n+1);
	pru_dumpX(out, bit.CH_MAP_10, n+1);
	pru_dumpX(out, bit.CH_MAP_11, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR3_reg_t-
// -SS--
// -BF-CH_MAP_12-
// -BF-CH_MAP_13-
// -BF-CH_MAP_14-
// -BF-CH_MAP_15-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR3_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_12, n+1);
	pru_dumpX(out, bit.CH_MAP_13, n+1);
	pru_dumpX(out, bit.CH_MAP_14, n+1);
	pru_dumpX(out, bit.CH_MAP_15, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR4_reg_t-
// -SS--
// -BF-CH_MAP_16-
// -BF-CH_MAP_17-
// -BF-CH_MAP_18-
// -BF-CH_MAP_19-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR4_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_16, n+1);
	pru_dumpX(out, bit.CH_MAP_17, n+1);
	pru_dumpX(out, bit.CH_MAP_18, n+1);
	pru_dumpX(out, bit.CH_MAP_19, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR5_reg_t-
// -SS--
// -BF-CH_MAP_20-
// -BF-CH_MAP_21-
// -BF-CH_MAP_22-
// -BF-CH_MAP_23-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR5_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_20, n+1);
	pru_dumpX(out, bit.CH_MAP_21, n+1);
	pru_dumpX(out, bit.CH_MAP_22, n+1);
	pru_dumpX(out, bit.CH_MAP_23, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR6_reg_t-
// -SS--
// -BF-CH_MAP_24-
// -BF-CH_MAP_25-
// -BF-CH_MAP_26-
// -BF-CH_MAP_27-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR6_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_24, n+1);
	pru_dumpX(out, bit.CH_MAP_25, n+1);
	pru_dumpX(out, bit.CH_MAP_26, n+1);
	pru_dumpX(out, bit.CH_MAP_27, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR7_reg_t-
// -SS--
// -BF-CH_MAP_28-
// -BF-CH_MAP_29-
// -BF-CH_MAP_30-
// -BF-CH_MAP_31-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR7_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_28, n+1);
	pru_dumpX(out, bit.CH_MAP_29, n+1);
	pru_dumpX(out, bit.CH_MAP_30, n+1);
	pru_dumpX(out, bit.CH_MAP_31, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR8_reg_t-
// -SS--
// -BF-CH_MAP_32-
// -BF-CH_MAP_33-
// -BF-CH_MAP_34-
// -BF-CH_MAP_35-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR8_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_32, n+1);
	pru_dumpX(out, bit.CH_MAP_33, n+1);
	pru_dumpX(out, bit.CH_MAP_34, n+1);
	pru_dumpX(out, bit.CH_MAP_35, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR9_reg_t-
// -SS--
// -BF-CH_MAP_36-
// -BF-CH_MAP_37-
// -BF-CH_MAP_38-
// -BF-CH_MAP_39-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR9_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_36, n+1);
	pru_dumpX(out, bit.CH_MAP_37, n+1);
	pru_dumpX(out, bit.CH_MAP_38, n+1);
	pru_dumpX(out, bit.CH_MAP_39, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR10_reg_t-
// -SS--
// -BF-CH_MAP_40-
// -BF-CH_MAP_41-
// -BF-CH_MAP_42-
// -BF-CH_MAP_43-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR10_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_40, n+1);
	pru_dumpX(out, bit.CH_MAP_41, n+1);
	pru_dumpX(out, bit.CH_MAP_42, n+1);
	pru_dumpX(out, bit.CH_MAP_43, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR11_reg_t-
// -SS--
// -BF-CH_MAP_44-
// -BF-CH_MAP_45-
// -BF-CH_MAP_46-
// -BF-CH_MAP_47-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR11_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_44, n+1);
	pru_dumpX(out, bit.CH_MAP_45, n+1);
	pru_dumpX(out, bit.CH_MAP_46, n+1);
	pru_dumpX(out, bit.CH_MAP_47, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR12_reg_t-
// -SS--
// -BF-CH_MAP_48-
// -BF-CH_MAP_49-
// -BF-CH_MAP_50-
// -BF-CH_MAP_51-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR12_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_48, n+1);
	pru_dumpX(out, bit.CH_MAP_49, n+1);
	pru_dumpX(out, bit.CH_MAP_50, n+1);
	pru_dumpX(out, bit.CH_MAP_51, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR13_reg_t-
// -SS--
// -BF-CH_MAP_52-
// -BF-CH_MAP_53-
// -BF-CH_MAP_54-
// -BF-CH_MAP_55-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR13_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_52, n+1);
	pru_dumpX(out, bit.CH_MAP_53, n+1);
	pru_dumpX(out, bit.CH_MAP_54, n+1);
	pru_dumpX(out, bit.CH_MAP_55, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR14_reg_t-
// -SS--
// -BF-CH_MAP_56-
// -BF-CH_MAP_57-
// -BF-CH_MAP_58-
// -BF-CH_MAP_59-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR14_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_56, n+1);
	pru_dumpX(out, bit.CH_MAP_57, n+1);
	pru_dumpX(out, bit.CH_MAP_58, n+1);
	pru_dumpX(out, bit.CH_MAP_59, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_CMR15_reg_t-
// -SS--
// -BF-CH_MAP_60-
// -BF-CH_MAP_61-
// -BF-CH_MAP_62-
// -BF-CH_MAP_63-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_CMR15_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.CH_MAP_60, n+1);
	pru_dumpX(out, bit.CH_MAP_61, n+1);
	pru_dumpX(out, bit.CH_MAP_62, n+1);
	pru_dumpX(out, bit.CH_MAP_63, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HMR0_reg_t-
// -SS--
// -BF-HINT_MAP_0-
// -BF-HINT_MAP_1-
// -BF-HINT_MAP_2-
// -BF-HINT_MAP_3-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HMR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.HINT_MAP_0, n+1);
	pru_dumpX(out, bit.HINT_MAP_1, n+1);
	pru_dumpX(out, bit.HINT_MAP_2, n+1);
	pru_dumpX(out, bit.HINT_MAP_3, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HMR1_reg_t-
// -SS--
// -BF-HINT_MAP_4-
// -BF-HINT_MAP_5-
// -BF-HINT_MAP_6-
// -BF-HINT_MAP_7-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HMR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.HINT_MAP_4, n+1);
	pru_dumpX(out, bit.HINT_MAP_5, n+1);
	pru_dumpX(out, bit.HINT_MAP_6, n+1);
	pru_dumpX(out, bit.HINT_MAP_7, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HMR2_reg_t-
// -SS--
// -BF-HINT_MAP_8-
// -BF-HINT_MAP_9-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HMR2_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.HINT_MAP_8, n+1);
	pru_dumpX(out, bit.HINT_MAP_9, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR0_reg_t-
// -SS--
// -BF-PRI_HINT_0-
// -BF-NONE_HINT_0-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_0, n+1);
	pru_dumpX(out, bit.NONE_HINT_0, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR1_reg_t-
// -SS--
// -BF-PRI_HINT_1-
// -BF-NONE_HINT_1-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_1, n+1);
	pru_dumpX(out, bit.NONE_HINT_1, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR2_reg_t-
// -SS--
// -BF-PRI_HINT_2-
// -BF-NONE_HINT_2-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR2_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_2, n+1);
	pru_dumpX(out, bit.NONE_HINT_2, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR3_reg_t-
// -SS--
// -BF-PRI_HINT_3-
// -BF-NONE_HINT_3-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR3_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_3, n+1);
	pru_dumpX(out, bit.NONE_HINT_3, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR4_reg_t-
// -SS--
// -BF-PRI_HINT_4-
// -BF-NONE_HINT_4-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR4_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_4, n+1);
	pru_dumpX(out, bit.NONE_HINT_4, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR5_reg_t-
// -SS--
// -BF-PRI_HINT_5-
// -BF-NONE_HINT_5-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR5_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_5, n+1);
	pru_dumpX(out, bit.NONE_HINT_5, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR6_reg_t-
// -SS--
// -BF-PRI_HINT_6-
// -BF-NONE_HINT_6-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR6_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_6, n+1);
	pru_dumpX(out, bit.NONE_HINT_6, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR7_reg_t-
// -SS--
// -BF-PRI_HINT_7-
// -BF-NONE_HINT_7-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR7_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_7, n+1);
	pru_dumpX(out, bit.NONE_HINT_7, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR8_reg_t-
// -SS--
// -BF-PRI_HINT_8-
// -BF-NONE_HINT_8-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR8_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_8, n+1);
	pru_dumpX(out, bit.NONE_HINT_8, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIPIR9_reg_t-
// -SS--
// -BF-PRI_HINT_9-
// -BF-NONE_HINT_9-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIPIR9_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRI_HINT_9, n+1);
	pru_dumpX(out, bit.NONE_HINT_9, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SIPR0_reg_t-
// -SS--
// -BF-POLARITY_0-
// -BF-POLARITY_1-
// -BF-POLARITY_2-
// -BF-POLARITY_3-
// -BF-POLARITY_4-
// -BF-POLARITY_5-
// -BF-POLARITY_6-
// -BF-POLARITY_7-
// -BF-POLARITY_8-
// -BF-POLARITY_9-
// -BF-POLARITY_10-
// -BF-POLARITY_11-
// -BF-POLARITY_12-
// -BF-POLARITY_13-
// -BF-POLARITY_14-
// -BF-POLARITY_15-
// -BF-POLARITY_16-
// -BF-POLARITY_17-
// -BF-POLARITY_18-
// -BF-POLARITY_19-
// -BF-POLARITY_20-
// -BF-POLARITY_21-
// -BF-POLARITY_22-
// -BF-POLARITY_23-
// -BF-POLARITY_24-
// -BF-POLARITY_25-
// -BF-POLARITY_26-
// -BF-POLARITY_27-
// -BF-POLARITY_28-
// -BF-POLARITY_29-
// -BF-POLARITY_30-
// -BF-POLARITY_31-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SIPR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.POLARITY_0, n+1);
	pru_dumpX(out, bit.POLARITY_1, n+1);
	pru_dumpX(out, bit.POLARITY_2, n+1);
	pru_dumpX(out, bit.POLARITY_3, n+1);
	pru_dumpX(out, bit.POLARITY_4, n+1);
	pru_dumpX(out, bit.POLARITY_5, n+1);
	pru_dumpX(out, bit.POLARITY_6, n+1);
	pru_dumpX(out, bit.POLARITY_7, n+1);
	pru_dumpX(out, bit.POLARITY_8, n+1);
	pru_dumpX(out, bit.POLARITY_9, n+1);
	pru_dumpX(out, bit.POLARITY_10, n+1);
	pru_dumpX(out, bit.POLARITY_11, n+1);
	pru_dumpX(out, bit.POLARITY_12, n+1);
	pru_dumpX(out, bit.POLARITY_13, n+1);
	pru_dumpX(out, bit.POLARITY_14, n+1);
	pru_dumpX(out, bit.POLARITY_15, n+1);
	pru_dumpX(out, bit.POLARITY_16, n+1);
	pru_dumpX(out, bit.POLARITY_17, n+1);
	pru_dumpX(out, bit.POLARITY_18, n+1);
	pru_dumpX(out, bit.POLARITY_19, n+1);
	pru_dumpX(out, bit.POLARITY_20, n+1);
	pru_dumpX(out, bit.POLARITY_21, n+1);
	pru_dumpX(out, bit.POLARITY_22, n+1);
	pru_dumpX(out, bit.POLARITY_23, n+1);
	pru_dumpX(out, bit.POLARITY_24, n+1);
	pru_dumpX(out, bit.POLARITY_25, n+1);
	pru_dumpX(out, bit.POLARITY_26, n+1);
	pru_dumpX(out, bit.POLARITY_27, n+1);
	pru_dumpX(out, bit.POLARITY_28, n+1);
	pru_dumpX(out, bit.POLARITY_29, n+1);
	pru_dumpX(out, bit.POLARITY_30, n+1);
	pru_dumpX(out, bit.POLARITY_31, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SIPR1_reg_t-
// -SS--
// -BF-POLARITY_32-
// -BF-POLARITY_33-
// -BF-POLARITY_34-
// -BF-POLARITY_35-
// -BF-POLARITY_36-
// -BF-POLARITY_37-
// -BF-POLARITY_38-
// -BF-POLARITY_39-
// -BF-POLARITY_40-
// -BF-POLARITY_41-
// -BF-POLARITY_42-
// -BF-POLARITY_43-
// -BF-POLARITY_44-
// -BF-POLARITY_45-
// -BF-POLARITY_46-
// -BF-POLARITY_47-
// -BF-POLARITY_48-
// -BF-POLARITY_49-
// -BF-POLARITY_50-
// -BF-POLARITY_51-
// -BF-POLARITY_52-
// -BF-POLARITY_53-
// -BF-POLARITY_54-
// -BF-POLARITY_55-
// -BF-POLARITY_56-
// -BF-POLARITY_57-
// -BF-POLARITY_58-
// -BF-POLARITY_59-
// -BF-POLARITY_60-
// -BF-POLARITY_61-
// -BF-POLARITY_62-
// -BF-POLARITY_63-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SIPR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.POLARITY_32, n+1);
	pru_dumpX(out, bit.POLARITY_33, n+1);
	pru_dumpX(out, bit.POLARITY_34, n+1);
	pru_dumpX(out, bit.POLARITY_35, n+1);
	pru_dumpX(out, bit.POLARITY_36, n+1);
	pru_dumpX(out, bit.POLARITY_37, n+1);
	pru_dumpX(out, bit.POLARITY_38, n+1);
	pru_dumpX(out, bit.POLARITY_39, n+1);
	pru_dumpX(out, bit.POLARITY_40, n+1);
	pru_dumpX(out, bit.POLARITY_41, n+1);
	pru_dumpX(out, bit.POLARITY_42, n+1);
	pru_dumpX(out, bit.POLARITY_43, n+1);
	pru_dumpX(out, bit.POLARITY_44, n+1);
	pru_dumpX(out, bit.POLARITY_45, n+1);
	pru_dumpX(out, bit.POLARITY_46, n+1);
	pru_dumpX(out, bit.POLARITY_47, n+1);
	pru_dumpX(out, bit.POLARITY_48, n+1);
	pru_dumpX(out, bit.POLARITY_49, n+1);
	pru_dumpX(out, bit.POLARITY_50, n+1);
	pru_dumpX(out, bit.POLARITY_51, n+1);
	pru_dumpX(out, bit.POLARITY_52, n+1);
	pru_dumpX(out, bit.POLARITY_53, n+1);
	pru_dumpX(out, bit.POLARITY_54, n+1);
	pru_dumpX(out, bit.POLARITY_55, n+1);
	pru_dumpX(out, bit.POLARITY_56, n+1);
	pru_dumpX(out, bit.POLARITY_57, n+1);
	pru_dumpX(out, bit.POLARITY_58, n+1);
	pru_dumpX(out, bit.POLARITY_59, n+1);
	pru_dumpX(out, bit.POLARITY_60, n+1);
	pru_dumpX(out, bit.POLARITY_61, n+1);
	pru_dumpX(out, bit.POLARITY_62, n+1);
	pru_dumpX(out, bit.POLARITY_63, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SITR0_reg_t-
// -SS--
// -BF-TYPE_0-
// -BF-TYPE_1-
// -BF-TYPE_2-
// -BF-TYPE_3-
// -BF-TYPE_4-
// -BF-TYPE_5-
// -BF-TYPE_6-
// -BF-TYPE_7-
// -BF-TYPE_8-
// -BF-TYPE_9-
// -BF-TYPE_10-
// -BF-TYPE_11-
// -BF-TYPE_12-
// -BF-TYPE_13-
// -BF-TYPE_14-
// -BF-TYPE_15-
// -BF-TYPE_16-
// -BF-TYPE_17-
// -BF-TYPE_18-
// -BF-TYPE_19-
// -BF-TYPE_20-
// -BF-TYPE_21-
// -BF-TYPE_22-
// -BF-TYPE_23-
// -BF-TYPE_24-
// -BF-TYPE_25-
// -BF-TYPE_26-
// -BF-TYPE_27-
// -BF-TYPE_28-
// -BF-TYPE_29-
// -BF-TYPE_30-
// -BF-TYPE_31-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SITR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.TYPE_0, n+1);
	pru_dumpX(out, bit.TYPE_1, n+1);
	pru_dumpX(out, bit.TYPE_2, n+1);
	pru_dumpX(out, bit.TYPE_3, n+1);
	pru_dumpX(out, bit.TYPE_4, n+1);
	pru_dumpX(out, bit.TYPE_5, n+1);
	pru_dumpX(out, bit.TYPE_6, n+1);
	pru_dumpX(out, bit.TYPE_7, n+1);
	pru_dumpX(out, bit.TYPE_8, n+1);
	pru_dumpX(out, bit.TYPE_9, n+1);
	pru_dumpX(out, bit.TYPE_10, n+1);
	pru_dumpX(out, bit.TYPE_11, n+1);
	pru_dumpX(out, bit.TYPE_12, n+1);
	pru_dumpX(out, bit.TYPE_13, n+1);
	pru_dumpX(out, bit.TYPE_14, n+1);
	pru_dumpX(out, bit.TYPE_15, n+1);
	pru_dumpX(out, bit.TYPE_16, n+1);
	pru_dumpX(out, bit.TYPE_17, n+1);
	pru_dumpX(out, bit.TYPE_18, n+1);
	pru_dumpX(out, bit.TYPE_19, n+1);
	pru_dumpX(out, bit.TYPE_20, n+1);
	pru_dumpX(out, bit.TYPE_21, n+1);
	pru_dumpX(out, bit.TYPE_22, n+1);
	pru_dumpX(out, bit.TYPE_23, n+1);
	pru_dumpX(out, bit.TYPE_24, n+1);
	pru_dumpX(out, bit.TYPE_25, n+1);
	pru_dumpX(out, bit.TYPE_26, n+1);
	pru_dumpX(out, bit.TYPE_27, n+1);
	pru_dumpX(out, bit.TYPE_28, n+1);
	pru_dumpX(out, bit.TYPE_29, n+1);
	pru_dumpX(out, bit.TYPE_30, n+1);
	pru_dumpX(out, bit.TYPE_31, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_SITR1_reg_t-
// -SS--
// -BF-TYPE_32-
// -BF-TYPE_33-
// -BF-TYPE_34-
// -BF-TYPE_35-
// -BF-TYPE_36-
// -BF-TYPE_37-
// -BF-TYPE_38-
// -BF-TYPE_39-
// -BF-TYPE_40-
// -BF-TYPE_41-
// -BF-TYPE_42-
// -BF-TYPE_43-
// -BF-TYPE_44-
// -BF-TYPE_45-
// -BF-TYPE_46-
// -BF-TYPE_47-
// -BF-TYPE_48-
// -BF-TYPE_49-
// -BF-TYPE_50-
// -BF-TYPE_51-
// -BF-TYPE_52-
// -BF-TYPE_53-
// -BF-TYPE_54-
// -BF-TYPE_55-
// -BF-TYPE_56-
// -BF-TYPE_57-
// -BF-TYPE_58-
// -BF-TYPE_59-
// -BF-TYPE_60-
// -BF-TYPE_61-
// -BF-TYPE_62-
// -BF-TYPE_63-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_SITR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.TYPE_32, n+1);
	pru_dumpX(out, bit.TYPE_33, n+1);
	pru_dumpX(out, bit.TYPE_34, n+1);
	pru_dumpX(out, bit.TYPE_35, n+1);
	pru_dumpX(out, bit.TYPE_36, n+1);
	pru_dumpX(out, bit.TYPE_37, n+1);
	pru_dumpX(out, bit.TYPE_38, n+1);
	pru_dumpX(out, bit.TYPE_39, n+1);
	pru_dumpX(out, bit.TYPE_40, n+1);
	pru_dumpX(out, bit.TYPE_41, n+1);
	pru_dumpX(out, bit.TYPE_42, n+1);
	pru_dumpX(out, bit.TYPE_43, n+1);
	pru_dumpX(out, bit.TYPE_44, n+1);
	pru_dumpX(out, bit.TYPE_45, n+1);
	pru_dumpX(out, bit.TYPE_46, n+1);
	pru_dumpX(out, bit.TYPE_47, n+1);
	pru_dumpX(out, bit.TYPE_48, n+1);
	pru_dumpX(out, bit.TYPE_49, n+1);
	pru_dumpX(out, bit.TYPE_50, n+1);
	pru_dumpX(out, bit.TYPE_51, n+1);
	pru_dumpX(out, bit.TYPE_52, n+1);
	pru_dumpX(out, bit.TYPE_53, n+1);
	pru_dumpX(out, bit.TYPE_54, n+1);
	pru_dumpX(out, bit.TYPE_55, n+1);
	pru_dumpX(out, bit.TYPE_56, n+1);
	pru_dumpX(out, bit.TYPE_57, n+1);
	pru_dumpX(out, bit.TYPE_58, n+1);
	pru_dumpX(out, bit.TYPE_59, n+1);
	pru_dumpX(out, bit.TYPE_60, n+1);
	pru_dumpX(out, bit.TYPE_61, n+1);
	pru_dumpX(out, bit.TYPE_62, n+1);
	pru_dumpX(out, bit.TYPE_63, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR0_reg_t-
// -SS--
// -BF-NEST_HINT_0-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_0, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR1_reg_t-
// -SS--
// -BF-NEST_HINT_1-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_1, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR2_reg_t-
// -SS--
// -BF-NEST_HINT_2-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR2_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_2, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR3_reg_t-
// -SS--
// -BF-NEST_HINT_3-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR3_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_3, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR4_reg_t-
// -SS--
// -BF-NEST_HINT_4-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR4_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_4, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR5_reg_t-
// -SS--
// -BF-NEST_HINT_5-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR5_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_5, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR6_reg_t-
// -SS--
// -BF-NEST_HINT_6-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR6_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_6, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR7_reg_t-
// -SS--
// -BF-NEST_HINT_7-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR7_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_7, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR8_reg_t-
// -SS--
// -BF-NEST_HINT_8-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR8_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_8, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HINLR9_reg_t-
// -SS--
// -BF-NEST_HINT_9-
// -BF-AUTO_OVERRIDE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HINLR9_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.NEST_HINT_9, n+1);
	pru_dumpX(out, bit.AUTO_OVERRIDE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_HIER_reg_t-
// -SS--
// -BF-ENABLE_HINT-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_HIER_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.ENABLE_HINT, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_icss_intc_regs_t-
// -BF-REVID-
// -BF-CR-
// -BF-GER-
// -BF-GNLR-
// -BF-SISR-
// -BF-SICR-
// -BF-EISR-
// -BF-EICR-
// -BF-HIEISR-
// -BF-HIDISR-
// -BF-GPIR-
// -BF-SRSR0-
// -BF-SRSR1-
// -BF-SECR0-
// -BF-SECR1-
// -BF-ESR0-
// -BF-ESR1-
// -BF-ECR0-
// -BF-ECR1-
// -BF-CMR0-
// -BF-CMR1-
// -BF-CMR2-
// -BF-CMR3-
// -BF-CMR4-
// -BF-CMR5-
// -BF-CMR6-
// -BF-CMR7-
// -BF-CMR8-
// -BF-CMR9-
// -BF-CMR10-
// -BF-CMR11-
// -BF-CMR12-
// -BF-CMR13-
// -BF-CMR14-
// -BF-CMR15-
// -BF-HMR0-
// -BF-HMR1-
// -BF-HMR2-
// -BF-HIPIR0-
// -BF-HIPIR1-
// -BF-HIPIR2-
// -BF-HIPIR3-
// -BF-HIPIR4-
// -BF-HIPIR5-
// -BF-HIPIR6-
// -BF-HIPIR7-
// -BF-HIPIR8-
// -BF-HIPIR9-
// -BF-SIPR0-
// -BF-SIPR1-
// -BF-SITR0-
// -BF-SITR1-
// -BF-HINLR0-
// -BF-HINLR1-
// -BF-HINLR2-
// -BF-HINLR3-
// -BF-HINLR4-
// -BF-HINLR5-
// -BF-HINLR6-
// -BF-HINLR7-
// -BF-HINLR8-
// -BF-HINLR9-
// -BF-HIER-
// -ES--
inline void pru_dump_val(ostream &out, const pru_icss_intc_regs_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, REVID, n+1);
	pru_dumpX(out, CR, n+1);
	pru_dumpX(out, GER, n+1);
	pru_dumpX(out, GNLR, n+1);
	pru_dumpX(out, SISR, n+1);
	pru_dumpX(out, SICR, n+1);
	pru_dumpX(out, EISR, n+1);
	pru_dumpX(out, EICR, n+1);
	pru_dumpX(out, HIEISR, n+1);
	pru_dumpX(out, HIDISR, n+1);
	pru_dumpX(out, GPIR, n+1);
	pru_dumpX(out, SRSR0, n+1);
	pru_dumpX(out, SRSR1, n+1);
	pru_dumpX(out, SECR0, n+1);
	pru_dumpX(out, SECR1, n+1);
	pru_dumpX(out, ESR0, n+1);
	pru_dumpX(out, ESR1, n+1);
	pru_dumpX(out, ECR0, n+1);
	pru_dumpX(out, ECR1, n+1);
	pru_dumpX(out, CMR0, n+1);
	pru_dumpX(out, CMR1, n+1);
	pru_dumpX(out, CMR2, n+1);
	pru_dumpX(out, CMR3, n+1);
	pru_dumpX(out, CMR4, n+1);
	pru_dumpX(out, CMR5, n+1);
	pru_dumpX(out, CMR6, n+1);
	pru_dumpX(out, CMR7, n+1);
	pru_dumpX(out, CMR8, n+1);
	pru_dumpX(out, CMR9, n+1);
	pru_dumpX(out, CMR10, n+1);
	pru_dumpX(out, CMR11, n+1);
	pru_dumpX(out, CMR12, n+1);
	pru_dumpX(out, CMR13, n+1);
	pru_dumpX(out, CMR14, n+1);
	pru_dumpX(out, CMR15, n+1);
	pru_dumpX(out, HMR0, n+1);
	pru_dumpX(out, HMR1, n+1);
	pru_dumpX(out, HMR2, n+1);
	pru_dumpX(out, HIPIR0, n+1);
	pru_dumpX(out, HIPIR1, n+1);
	pru_dumpX(out, HIPIR2, n+1);
	pru_dumpX(out, HIPIR3, n+1);
	pru_dumpX(out, HIPIR4, n+1);
	pru_dumpX(out, HIPIR5, n+1);
	pru_dumpX(out, HIPIR6, n+1);
	pru_dumpX(out, HIPIR7, n+1);
	pru_dumpX(out, HIPIR8, n+1);
	pru_dumpX(out, HIPIR9, n+1);
	pru_dumpX(out, SIPR0, n+1);
	pru_dumpX(out, SIPR1, n+1);
	pru_dumpX(out, SITR0, n+1);
	pru_dumpX(out, SITR1, n+1);
	pru_dumpX(out, HINLR0, n+1);
	pru_dumpX(out, HINLR1, n+1);
	pru_dumpX(out, HINLR2, n+1);
	pru_dumpX(out, HINLR3, n+1);
	pru_dumpX(out, HINLR4, n+1);
	pru_dumpX(out, HINLR5, n+1);
	pru_dumpX(out, HINLR6, n+1);
	pru_dumpX(out, HINLR7, n+1);
	pru_dumpX(out, HINLR8, n+1);
	pru_dumpX(out, HINLR9, n+1);
	pru_dumpX(out, HIER, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CONTROL_reg_t-
// -SS--
// -BF-SOFT_RST_N-
// -BF-ENABLE-
// -BF-SLEEPING-
// -BF-COUNTER_ENABLE-
// -BF-SINGLE_STEP-
// -BF-RUNSTATE-
// -BF-PCOUNTER_RST_VAL-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CONTROL_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.SOFT_RST_N, n+1);
	pru_dumpX(out, bit.ENABLE, n+1);
	pru_dumpX(out, bit.SLEEPING, n+1);
	pru_dumpX(out, bit.COUNTER_ENABLE, n+1);
	pru_dumpX(out, bit.SINGLE_STEP, n+1);
	pru_dumpX(out, bit.RUNSTATE, n+1);
	pru_dumpX(out, bit.PCOUNTER_RST_VAL, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_STATUS_reg_t-
// -SS--
// -BF-PCOUNTER-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_STATUS_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PCOUNTER, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CTBIR0_reg_t-
// -SS--
// -BF-C24_BLK_INDEX-
// -BF-C25_BLK_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CTBIR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.C24_BLK_INDEX, n+1);
	pru_dumpX(out, bit.C25_BLK_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CTBIR1_reg_t-
// -SS--
// -BF-C26_BLK_INDEX-
// -BF-C27_BLK_INDEX-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CTBIR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.C26_BLK_INDEX, n+1);
	pru_dumpX(out, bit.C27_BLK_INDEX, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CTPPR0_reg_t-
// -SS--
// -BF-C28_POINTER-
// -BF-C29_POINTER-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CTPPR0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.C28_POINTER, n+1);
	pru_dumpX(out, bit.C29_POINTER, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CTPPR1_reg_t-
// -SS--
// -BF-C30_POINTER-
// -BF-C31_POINTER-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CTPPR1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.C30_POINTER, n+1);
	pru_dumpX(out, bit.C31_POINTER, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_control_frame_t-
// -BF-CONTROL-
// -BF-STATUS-
// -BF-WAKEUP_EN-
// -BF-CYCLE-
// -BF-STALL-
// -BF-CTBIR0-
// -BF-CTBIR1-
// -BF-CTPPR0-
// -BF-CTPPR1-
// -ES--
inline void pru_dump_val(ostream &out, const pru_control_frame_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, CONTROL, n+1);
	pru_dumpX(out, STATUS, n+1);
	pru_dumpX(out, WAKEUP_EN, n+1);
	pru_dumpX(out, CYCLE, n+1);
	pru_dumpX(out, STALL, n+1);
	pru_dumpX(out, CTBIR0, n+1);
	pru_dumpX(out, CTBIR1, n+1);
	pru_dumpX(out, CTPPR0, n+1);
	pru_dumpX(out, CTPPR1, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_debug_frame_t-
// -VU-GPREG-
// -VU-CTREG-
// -ES--
inline void pru_dump_val(ostream &out, const pru_debug_frame_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, GPREG[0], n+1);
	pru_dumpX(out, GPREG[1], n+1);
	pru_dumpX(out, GPREG[2], n+1);
	pru_dumpX(out, GPREG[3], n+1);
	pru_dumpX(out, GPREG[4], n+1);
	pru_dumpX(out, GPREG[5], n+1);
	pru_dumpX(out, GPREG[6], n+1);
	pru_dumpX(out, GPREG[7], n+1);
	pru_dumpX(out, GPREG[8], n+1);
	pru_dumpX(out, GPREG[9], n+1);
	pru_dumpX(out, GPREG[10], n+1);
	pru_dumpX(out, GPREG[11], n+1);
	pru_dumpX(out, GPREG[12], n+1);
	pru_dumpX(out, GPREG[13], n+1);
	pru_dumpX(out, GPREG[14], n+1);
	pru_dumpX(out, GPREG[15], n+1);
	pru_dumpX(out, GPREG[16], n+1);
	pru_dumpX(out, GPREG[17], n+1);
	pru_dumpX(out, GPREG[18], n+1);
	pru_dumpX(out, GPREG[19], n+1);
	pru_dumpX(out, GPREG[20], n+1);
	pru_dumpX(out, GPREG[21], n+1);
	pru_dumpX(out, GPREG[22], n+1);
	pru_dumpX(out, GPREG[23], n+1);
	pru_dumpX(out, GPREG[24], n+1);
	pru_dumpX(out, GPREG[25], n+1);
	pru_dumpX(out, GPREG[26], n+1);
	pru_dumpX(out, GPREG[27], n+1);
	pru_dumpX(out, GPREG[28], n+1);
	pru_dumpX(out, GPREG[29], n+1);
	pru_dumpX(out, GPREG[30], n+1);
	pru_dumpX(out, GPREG[31], n+1);
	pru_dumpX(out, CTREG[0], n+1);
	pru_dumpX(out, CTREG[1], n+1);
	pru_dumpX(out, CTREG[2], n+1);
	pru_dumpX(out, CTREG[3], n+1);
	pru_dumpX(out, CTREG[4], n+1);
	pru_dumpX(out, CTREG[5], n+1);
	pru_dumpX(out, CTREG[6], n+1);
	pru_dumpX(out, CTREG[7], n+1);
	pru_dumpX(out, CTREG[8], n+1);
	pru_dumpX(out, CTREG[9], n+1);
	pru_dumpX(out, CTREG[10], n+1);
	pru_dumpX(out, CTREG[11], n+1);
	pru_dumpX(out, CTREG[12], n+1);
	pru_dumpX(out, CTREG[13], n+1);
	pru_dumpX(out, CTREG[14], n+1);
	pru_dumpX(out, CTREG[15], n+1);
	pru_dumpX(out, CTREG[16], n+1);
	pru_dumpX(out, CTREG[17], n+1);
	pru_dumpX(out, CTREG[18], n+1);
	pru_dumpX(out, CTREG[19], n+1);
	pru_dumpX(out, CTREG[20], n+1);
	pru_dumpX(out, CTREG[21], n+1);
	pru_dumpX(out, CTREG[22], n+1);
	pru_dumpX(out, CTREG[23], n+1);
	pru_dumpX(out, CTREG[24], n+1);
	pru_dumpX(out, CTREG[25], n+1);
	pru_dumpX(out, CTREG[26], n+1);
	pru_dumpX(out, CTREG[27], n+1);
	pru_dumpX(out, CTREG[28], n+1);
	pru_dumpX(out, CTREG[29], n+1);
	pru_dumpX(out, CTREG[30], n+1);
	pru_dumpX(out, CTREG[31], n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_SYSCFG_reg_t-
// -SS--
// -BF-IDLE_MODE-
// -BF-STANDBY_MODE-
// -BF-STANDBY_INIT-
// -BF-SUB_MWAIT-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_SYSCFG_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.IDLE_MODE, n+1);
	pru_dumpX(out, bit.STANDBY_MODE, n+1);
	pru_dumpX(out, bit.STANDBY_INIT, n+1);
	pru_dumpX(out, bit.SUB_MWAIT, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_GPCFG0_reg_t-
// -SS--
// -BF-PRU0_GPI_MODE-
// -BF-PRU0_GPI_CLK_MODE-
// -BF-PRU0_GPI_DIV0-
// -BF-PRU0_GPI_DIV1-
// -BF-PRU0_GPI_SB-
// -BF-PRU0_GPO_MODE-
// -BF-PRU0_GPO_DIV0-
// -BF-PRU0_GPO_DIV1-
// -BF-PRU0_GPO_SH_SEL-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_GPCFG0_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_GPI_MODE, n+1);
	pru_dumpX(out, bit.PRU0_GPI_CLK_MODE, n+1);
	pru_dumpX(out, bit.PRU0_GPI_DIV0, n+1);
	pru_dumpX(out, bit.PRU0_GPI_DIV1, n+1);
	pru_dumpX(out, bit.PRU0_GPI_SB, n+1);
	pru_dumpX(out, bit.PRU0_GPO_MODE, n+1);
	pru_dumpX(out, bit.PRU0_GPO_DIV0, n+1);
	pru_dumpX(out, bit.PRU0_GPO_DIV1, n+1);
	pru_dumpX(out, bit.PRU0_GPO_SH_SEL, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_GPCFG1_reg_t-
// -SS--
// -BF-PRU1_GPI_MODE-
// -BF-PRU1_GPI_CLK_MODE-
// -BF-PRU1_GPI_DIV0-
// -BF-PRU1_GPI_DIV1-
// -BF-PRU1_GPI_SB-
// -BF-PRU1_GPO_MODE-
// -BF-PRU1_GPO_DIV0-
// -BF-PRU1_GPO_DIV1-
// -BF-PRU1_GPO_SH_SEL-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_GPCFG1_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU1_GPI_MODE, n+1);
	pru_dumpX(out, bit.PRU1_GPI_CLK_MODE, n+1);
	pru_dumpX(out, bit.PRU1_GPI_DIV0, n+1);
	pru_dumpX(out, bit.PRU1_GPI_DIV1, n+1);
	pru_dumpX(out, bit.PRU1_GPI_SB, n+1);
	pru_dumpX(out, bit.PRU1_GPO_MODE, n+1);
	pru_dumpX(out, bit.PRU1_GPO_DIV0, n+1);
	pru_dumpX(out, bit.PRU1_GPO_DIV1, n+1);
	pru_dumpX(out, bit.PRU1_GPO_SH_SEL, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_CGR_reg_t-
// -SS--
// -BF-PRU0_CLK_STOP_REQ-
// -BF-PRU0_CLK_STOP_ACK-
// -BF-PRU0_CLK_EN-
// -BF-PRU1_CLK_STOP_REQ-
// -BF-PRU1_CLK_STOP_ACK-
// -BF-PRU1_CLK_EN-
// -BF-INTC_CLK_STOP_REQ-
// -BF-INTC_CLK_CTOP_ACK-
// -BF-INTC_CLK_EN-
// -BF-UART_CLK_CTOP_REQ-
// -BF-UART_CLK_STOP_ACK-
// -BF-UART_CLK_EN-
// -BF-ECAP_CLK_STOP_REQ-
// -BF-ECAP_CLK_STOP_ACK-
// -BF-ECAP_CLK_EN-
// -BF-IEP_CLK_STOP_REQ-
// -BF-IEP_CLK_STOP_ACK-
// -BF-IEP_CLK_EN-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_CGR_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_CLK_STOP_REQ, n+1);
	pru_dumpX(out, bit.PRU0_CLK_STOP_ACK, n+1);
	pru_dumpX(out, bit.PRU0_CLK_EN, n+1);
	pru_dumpX(out, bit.PRU1_CLK_STOP_REQ, n+1);
	pru_dumpX(out, bit.PRU1_CLK_STOP_ACK, n+1);
	pru_dumpX(out, bit.PRU1_CLK_EN, n+1);
	pru_dumpX(out, bit.INTC_CLK_STOP_REQ, n+1);
	pru_dumpX(out, bit.INTC_CLK_CTOP_ACK, n+1);
	pru_dumpX(out, bit.INTC_CLK_EN, n+1);
	pru_dumpX(out, bit.UART_CLK_CTOP_REQ, n+1);
	pru_dumpX(out, bit.UART_CLK_STOP_ACK, n+1);
	pru_dumpX(out, bit.UART_CLK_EN, n+1);
	pru_dumpX(out, bit.ECAP_CLK_STOP_REQ, n+1);
	pru_dumpX(out, bit.ECAP_CLK_STOP_ACK, n+1);
	pru_dumpX(out, bit.ECAP_CLK_EN, n+1);
	pru_dumpX(out, bit.IEP_CLK_STOP_REQ, n+1);
	pru_dumpX(out, bit.IEP_CLK_STOP_ACK, n+1);
	pru_dumpX(out, bit.IEP_CLK_EN, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_ISRP_reg_t-
// -SS--
// -BF-PRU0_IMEM_PE_RAW-
// -BF-PRU0_DMEM_PE_RAW-
// -BF-PRU1_IMEM_PE_RAW-
// -BF-PRU1_DMEM_PE_RAW-
// -BF-RAM_PE_RAW-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_ISRP_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_IMEM_PE_RAW, n+1);
	pru_dumpX(out, bit.PRU0_DMEM_PE_RAW, n+1);
	pru_dumpX(out, bit.PRU1_IMEM_PE_RAW, n+1);
	pru_dumpX(out, bit.PRU1_DMEM_PE_RAW, n+1);
	pru_dumpX(out, bit.RAM_PE_RAW, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_ISP_reg_t-
// -SS--
// -BF-PRU0_IMEM_PE-
// -BF-PRU0_DMEM_PE-
// -BF-PRU1_IMEM_PE-
// -BF-PRU1_DMEM_PE-
// -BF-RAM_PE-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_ISP_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_IMEM_PE, n+1);
	pru_dumpX(out, bit.PRU0_DMEM_PE, n+1);
	pru_dumpX(out, bit.PRU1_IMEM_PE, n+1);
	pru_dumpX(out, bit.PRU1_DMEM_PE, n+1);
	pru_dumpX(out, bit.RAM_PE, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_IESP_reg_t-
// -SS--
// -BF-PRU0_IMEM_PE_SET-
// -BF-PRU0_DMEM_PE_SET-
// -BF-PRU1_IMEM_PE_SET-
// -BF-PRU1_DMEM_PE_SET-
// -BF-RAM_PE_SET-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_IESP_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_IMEM_PE_SET, n+1);
	pru_dumpX(out, bit.PRU0_DMEM_PE_SET, n+1);
	pru_dumpX(out, bit.PRU1_IMEM_PE_SET, n+1);
	pru_dumpX(out, bit.PRU1_DMEM_PE_SET, n+1);
	pru_dumpX(out, bit.RAM_PE_SET, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_IECP_reg_t-
// -SS--
// -BF-PRU0_IMEM_PE_CLR-
// -BF-PRU0_DMEM_PE_CLR-
// -BF-PRU1_IMEM_PE_CLR-
// -BF-PRU1_DMEM_PE_CLR-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_IECP_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU0_IMEM_PE_CLR, n+1);
	pru_dumpX(out, bit.PRU0_DMEM_PE_CLR, n+1);
	pru_dumpX(out, bit.PRU1_IMEM_PE_CLR, n+1);
	pru_dumpX(out, bit.PRU1_DMEM_PE_CLR, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_PMAO_reg_t-
// -SS--
// -BF-PMAO_PRU0-
// -BF-PMAO_PRU1-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_PMAO_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PMAO_PRU0, n+1);
	pru_dumpX(out, bit.PMAO_PRU1, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_MII_RT_reg_t-
// -SS--
// -BF-MII_RT_EVENT_EN-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_MII_RT_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.MII_RT_EVENT_EN, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_IEPCLK_reg_t-
// -SS--
// -BF-OCP_EN-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_IEPCLK_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.OCP_EN, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_SPP_reg_t-
// -SS--
// -BF-PRU1_PAD_HP_EN-
// -BF-XFR_SHIFT_EN-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_SPP_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PRU1_PAD_HP_EN, n+1);
	pru_dumpX(out, bit.XFR_SHIFT_EN, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_PIN_MX_reg_t-
// -SS--
// -BF-PIN_MUX_SEL-
// -ES-bit-
// -BF-all-
// -ES--
inline void pru_dump_val(ostream &out, const pru_PIN_MX_reg_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, bit.PIN_MUX_SEL, n+1);
	pru_dumpX(out, all, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-pru_config_frame_t-
// -BF-REVID-
// -BF-SYSCFG-
// -BF-GPCFG0-
// -BF-GPCFG1-
// -BF-CGR-
// -BF-ISRP-
// -BF-ISP-
// -BF-IESP-
// -BF-IECP-
// -BF-_rsvd1-
// -BF-PMAO-
// -BF-MII_RT-
// -BF-IEPCLK-
// -BF-SPP-
// -BF-_rsvd2-
// -BF-_rsvd3-
// -BF-PIN_MX-
// -ES--
inline void pru_dump_val(ostream &out, const pru_config_frame_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, REVID, n+1);
	pru_dumpX(out, SYSCFG, n+1);
	pru_dumpX(out, GPCFG0, n+1);
	pru_dumpX(out, GPCFG1, n+1);
	pru_dumpX(out, CGR, n+1);
	pru_dumpX(out, ISRP, n+1);
	pru_dumpX(out, ISP, n+1);
	pru_dumpX(out, IESP, n+1);
	pru_dumpX(out, IECP, n+1);
	pru_dumpX(out, PMAO, n+1);
	pru_dumpX(out, MII_RT, n+1);
	pru_dumpX(out, IEPCLK, n+1);
	pru_dumpX(out, SPP, n+1);
	pru_dumpX(out, PIN_MX, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

// -SS-prumem_t-
// -SS--
// -ES-DRAM0-
// -SS--
// -ES-DRAM1-
// -SS--
// -ES-DRAMS-
// -BF-INTC-
// -BF-PRU0CTL-
// -BF-PRU0DBG-
// -BF-PRU1CTL-
// -BF-PRU1DBG-
// -BF-CFG-
// -SS--
// -ES-IRAM0-
// -SS--
// -ES-IRAM1-
// -ES--
inline void pru_dump_val(ostream &out, const prumem_t &X, uint32_t n) {
	out << "{" << endl;
	pru_dumpX(out, INTC, n+1);
	pru_dumpX(out, PRU0CTL, n+1);
	pru_dumpX(out, PRU0DBG, n+1);
	pru_dumpX(out, PRU1CTL, n+1);
	pru_dumpX(out, PRU1DBG, n+1);
	pru_dumpX(out, CFG, n+1);
	pru_indent(out, n);
	out << "}" << endl;
}

