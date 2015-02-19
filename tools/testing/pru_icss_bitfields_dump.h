// Generated automatically by aux/intc_dump_builder.sh
// Written with information from AM335X PRU-ICSS Reference Guide
// Initial release: may-2014 - Lucas Hartmann
// Licensed under GPLv3+

#ifndef LHARTMANN_PRU_ICSS_INTC_DUMP_H
#define LHARTMANN_PRU_ICSS_INTC_DUMP_H
-e 	out << "REVID.REV_MINOR = 0x" << hex << intc.REVID.REV_MINOR << endl;
-e 	out << "REVID.REV_CUSTOM = " << hex << intc.REVID.REV_CUSTOM << endl;
-e 	out << "REVID.REV_MAJOR = " << hex << intc.REVID.REV_MAJOR << endl;
-e 	out << "REVID.REV_RTL = 0x" << hex << intc.REVID.REV_RTL << endl;
-e 	out << "REVID.REV_MODULE = 0x" << hex << intc.REVID.REV_MODULE << endl;
-e 	out << "REVID.REV_SCHEME = " << hex << intc.REVID.REV_SCHEME << endl;
-e 	out << "CR.NEST_MODE = " << hex << intc.CR.NEST_MODE << endl;
-e 	out << "GER.ENABLE_HINT_ANY = " << hex << intc.GER.ENABLE_HINT_ANY << endl;
-e 	out << "GNLR.GLB_NEST_LEVEL = 0x" << hex << intc.GNLR.GLB_NEST_LEVEL << endl;
-e 	out << "GNLR.AUTO_OVERRIDE = " << hex << intc.GNLR.AUTO_OVERRIDE << endl;
-e 	out << "SISR.STATUS_SET_INDEX = 0x" << hex << intc.SISR.STATUS_SET_INDEX << endl;
-e 	out << "SICR.STATUS_CLR_INDEX = 0x" << hex << intc.SICR.STATUS_CLR_INDEX << endl;
-e 	out << "EISR.ENABLE_SET_INDEX = 0x" << hex << intc.EISR.ENABLE_SET_INDEX << endl;
-e 	out << "EICR.ENABLE_CLR_INDEX = 0x" << hex << intc.EICR.ENABLE_CLR_INDEX << endl;
-e 	out << "HIEISR.HINT_ENABLE_SET_INDEX = 0x" << hex << intc.HIEISR.HINT_ENABLE_SET_INDEX << endl;
-e 	out << "HIDISR.HINT_ENABLE_CLR_INDEX = 0x" << hex << intc.HIDISR.HINT_ENABLE_CLR_INDEX << endl;
-e 	out << "GPIR.GLB_PRI_INTR = 0x" << hex << intc.GPIR.GLB_PRI_INTR << endl;
-e 	out << "GPIR.GLB_NONE = " << hex << intc.GPIR.GLB_NONE << endl;
-e 	out << "CMR0.CH_MAP_0 = 0x" << hex << intc.CMR0.CH_MAP_0 << endl;
-e 	out << "CMR0.CH_MAP_1 = 0x" << hex << intc.CMR0.CH_MAP_1 << endl;
-e 	out << "CMR0.CH_MAP_2 = 0x" << hex << intc.CMR0.CH_MAP_2 << endl;
-e 	out << "CMR0.CH_MAP_3 = 0x" << hex << intc.CMR0.CH_MAP_3 << endl;
-e 	out << "CMR1.CH_MAP_4 = 0x" << hex << intc.CMR1.CH_MAP_4 << endl;
-e 	out << "CMR1.CH_MAP_5 = 0x" << hex << intc.CMR1.CH_MAP_5 << endl;
-e 	out << "CMR1.CH_MAP_6 = 0x" << hex << intc.CMR1.CH_MAP_6 << endl;
-e 	out << "CMR1.CH_MAP_7 = 0x" << hex << intc.CMR1.CH_MAP_7 << endl;
-e 	out << "CMR2.CH_MAP_8 = 0x" << hex << intc.CMR2.CH_MAP_8 << endl;
-e 	out << "CMR2.CH_MAP_9 = 0x" << hex << intc.CMR2.CH_MAP_9 << endl;
-e 	out << "CMR2.CH_MAP_10 = 0x" << hex << intc.CMR2.CH_MAP_10 << endl;
-e 	out << "CMR2.CH_MAP_11 = 0x" << hex << intc.CMR2.CH_MAP_11 << endl;
-e 	out << "CMR3.CH_MAP_12 = 0x" << hex << intc.CMR3.CH_MAP_12 << endl;
-e 	out << "CMR3.CH_MAP_13 = 0x" << hex << intc.CMR3.CH_MAP_13 << endl;
-e 	out << "CMR3.CH_MAP_14 = 0x" << hex << intc.CMR3.CH_MAP_14 << endl;
-e 	out << "CMR3.CH_MAP_15 = 0x" << hex << intc.CMR3.CH_MAP_15 << endl;
-e 	out << "CMR4.CH_MAP_16 = 0x" << hex << intc.CMR4.CH_MAP_16 << endl;
-e 	out << "CMR4.CH_MAP_17 = 0x" << hex << intc.CMR4.CH_MAP_17 << endl;
-e 	out << "CMR4.CH_MAP_18 = 0x" << hex << intc.CMR4.CH_MAP_18 << endl;
-e 	out << "CMR4.CH_MAP_19 = 0x" << hex << intc.CMR4.CH_MAP_19 << endl;
-e 	out << "CMR5.CH_MAP_20 = 0x" << hex << intc.CMR5.CH_MAP_20 << endl;
-e 	out << "CMR5.CH_MAP_21 = 0x" << hex << intc.CMR5.CH_MAP_21 << endl;
-e 	out << "CMR5.CH_MAP_22 = 0x" << hex << intc.CMR5.CH_MAP_22 << endl;
-e 	out << "CMR5.CH_MAP_23 = 0x" << hex << intc.CMR5.CH_MAP_23 << endl;
-e 	out << "CMR6.CH_MAP_24 = 0x" << hex << intc.CMR6.CH_MAP_24 << endl;
-e 	out << "CMR6.CH_MAP_25 = 0x" << hex << intc.CMR6.CH_MAP_25 << endl;
-e 	out << "CMR6.CH_MAP_26 = 0x" << hex << intc.CMR6.CH_MAP_26 << endl;
-e 	out << "CMR6.CH_MAP_27 = 0x" << hex << intc.CMR6.CH_MAP_27 << endl;
-e 	out << "CMR7.CH_MAP_28 = 0x" << hex << intc.CMR7.CH_MAP_28 << endl;
-e 	out << "CMR7.CH_MAP_29 = 0x" << hex << intc.CMR7.CH_MAP_29 << endl;
-e 	out << "CMR7.CH_MAP_30 = 0x" << hex << intc.CMR7.CH_MAP_30 << endl;
-e 	out << "CMR7.CH_MAP_31 = 0x" << hex << intc.CMR7.CH_MAP_31 << endl;
-e 	out << "CMR8.CH_MAP_32 = 0x" << hex << intc.CMR8.CH_MAP_32 << endl;
-e 	out << "CMR8.CH_MAP_33 = 0x" << hex << intc.CMR8.CH_MAP_33 << endl;
-e 	out << "CMR8.CH_MAP_34 = 0x" << hex << intc.CMR8.CH_MAP_34 << endl;
-e 	out << "CMR8.CH_MAP_35 = 0x" << hex << intc.CMR8.CH_MAP_35 << endl;
-e 	out << "CMR9.CH_MAP_36 = 0x" << hex << intc.CMR9.CH_MAP_36 << endl;
-e 	out << "CMR9.CH_MAP_37 = 0x" << hex << intc.CMR9.CH_MAP_37 << endl;
-e 	out << "CMR9.CH_MAP_38 = 0x" << hex << intc.CMR9.CH_MAP_38 << endl;
-e 	out << "CMR9.CH_MAP_39 = 0x" << hex << intc.CMR9.CH_MAP_39 << endl;
-e 	out << "CMR10.CH_MAP_40 = 0x" << hex << intc.CMR10.CH_MAP_40 << endl;
-e 	out << "CMR10.CH_MAP_41 = 0x" << hex << intc.CMR10.CH_MAP_41 << endl;
-e 	out << "CMR10.CH_MAP_42 = 0x" << hex << intc.CMR10.CH_MAP_42 << endl;
-e 	out << "CMR10.CH_MAP_43 = 0x" << hex << intc.CMR10.CH_MAP_43 << endl;
-e 	out << "CMR11.CH_MAP_44 = 0x" << hex << intc.CMR11.CH_MAP_44 << endl;
-e 	out << "CMR11.CH_MAP_45 = 0x" << hex << intc.CMR11.CH_MAP_45 << endl;
-e 	out << "CMR11.CH_MAP_46 = 0x" << hex << intc.CMR11.CH_MAP_46 << endl;
-e 	out << "CMR11.CH_MAP_47 = 0x" << hex << intc.CMR11.CH_MAP_47 << endl;
-e 	out << "CMR12.CH_MAP_48 = 0x" << hex << intc.CMR12.CH_MAP_48 << endl;
-e 	out << "CMR12.CH_MAP_49 = 0x" << hex << intc.CMR12.CH_MAP_49 << endl;
-e 	out << "CMR12.CH_MAP_50 = 0x" << hex << intc.CMR12.CH_MAP_50 << endl;
-e 	out << "CMR12.CH_MAP_51 = 0x" << hex << intc.CMR12.CH_MAP_51 << endl;
-e 	out << "CMR13.CH_MAP_52 = 0x" << hex << intc.CMR13.CH_MAP_52 << endl;
-e 	out << "CMR13.CH_MAP_53 = 0x" << hex << intc.CMR13.CH_MAP_53 << endl;
-e 	out << "CMR13.CH_MAP_54 = 0x" << hex << intc.CMR13.CH_MAP_54 << endl;
-e 	out << "CMR13.CH_MAP_55 = 0x" << hex << intc.CMR13.CH_MAP_55 << endl;
-e 	out << "CMR14.CH_MAP_56 = 0x" << hex << intc.CMR14.CH_MAP_56 << endl;
-e 	out << "CMR14.CH_MAP_57 = 0x" << hex << intc.CMR14.CH_MAP_57 << endl;
-e 	out << "CMR14.CH_MAP_58 = 0x" << hex << intc.CMR14.CH_MAP_58 << endl;
-e 	out << "CMR14.CH_MAP_59 = 0x" << hex << intc.CMR14.CH_MAP_59 << endl;
-e 	out << "CMR15.CH_MAP_60 = 0x" << hex << intc.CMR15.CH_MAP_60 << endl;
-e 	out << "CMR15.CH_MAP_61 = 0x" << hex << intc.CMR15.CH_MAP_61 << endl;
-e 	out << "CMR15.CH_MAP_62 = 0x" << hex << intc.CMR15.CH_MAP_62 << endl;
-e 	out << "CMR15.CH_MAP_63 = 0x" << hex << intc.CMR15.CH_MAP_63 << endl;
-e 	out << "HMR0.HINT_MAP_0 = 0x" << hex << intc.HMR0.HINT_MAP_0 << endl;
-e 	out << "HMR0.HINT_MAP_1 = 0x" << hex << intc.HMR0.HINT_MAP_1 << endl;
-e 	out << "HMR0.HINT_MAP_2 = 0x" << hex << intc.HMR0.HINT_MAP_2 << endl;
-e 	out << "HMR0.HINT_MAP_3 = 0x" << hex << intc.HMR0.HINT_MAP_3 << endl;
-e 	out << "HMR1.HINT_MAP_4 = 0x" << hex << intc.HMR1.HINT_MAP_4 << endl;
-e 	out << "HMR1.HINT_MAP_5 = 0x" << hex << intc.HMR1.HINT_MAP_5 << endl;
-e 	out << "HMR1.HINT_MAP_6 = 0x" << hex << intc.HMR1.HINT_MAP_6 << endl;
-e 	out << "HMR1.HINT_MAP_7 = 0x" << hex << intc.HMR1.HINT_MAP_7 << endl;
-e 	out << "HMR2.HINT_MAP_8 = 0x" << hex << intc.HMR2.HINT_MAP_8 << endl;
-e 	out << "HMR2.HINT_MAP_9 = 0x" << hex << intc.HMR2.HINT_MAP_9 << endl;
-e 	out << "HIPIR0.PRI_HINT_0 = 0x" << hex << intc.HIPIR0.PRI_HINT_0 << endl;
-e 	out << "HIPIR0.NONE_HINT_0 = " << hex << intc.HIPIR0.NONE_HINT_0 << endl;
-e 	out << "HIPIR1.PRI_HINT_1 = 0x" << hex << intc.HIPIR1.PRI_HINT_1 << endl;
-e 	out << "HIPIR1.NONE_HINT_1 = " << hex << intc.HIPIR1.NONE_HINT_1 << endl;
-e 	out << "HIPIR2.PRI_HINT_2 = 0x" << hex << intc.HIPIR2.PRI_HINT_2 << endl;
-e 	out << "HIPIR2.NONE_HINT_2 = " << hex << intc.HIPIR2.NONE_HINT_2 << endl;
-e 	out << "HIPIR3.PRI_HINT_3 = 0x" << hex << intc.HIPIR3.PRI_HINT_3 << endl;
-e 	out << "HIPIR3.NONE_HINT_3 = " << hex << intc.HIPIR3.NONE_HINT_3 << endl;
-e 	out << "HIPIR4.PRI_HINT_4 = 0x" << hex << intc.HIPIR4.PRI_HINT_4 << endl;
-e 	out << "HIPIR4.NONE_HINT_4 = " << hex << intc.HIPIR4.NONE_HINT_4 << endl;
-e 	out << "HIPIR5.PRI_HINT_5 = 0x" << hex << intc.HIPIR5.PRI_HINT_5 << endl;
-e 	out << "HIPIR5.NONE_HINT_5 = " << hex << intc.HIPIR5.NONE_HINT_5 << endl;
-e 	out << "HIPIR6.PRI_HINT_6 = 0x" << hex << intc.HIPIR6.PRI_HINT_6 << endl;
-e 	out << "HIPIR6.NONE_HINT_6 = " << hex << intc.HIPIR6.NONE_HINT_6 << endl;
-e 	out << "HIPIR7.PRI_HINT_7 = 0x" << hex << intc.HIPIR7.PRI_HINT_7 << endl;
-e 	out << "HIPIR7.NONE_HINT_7 = " << hex << intc.HIPIR7.NONE_HINT_7 << endl;
-e 	out << "HIPIR8.PRI_HINT_8 = 0x" << hex << intc.HIPIR8.PRI_HINT_8 << endl;
-e 	out << "HIPIR8.NONE_HINT_8 = " << hex << intc.HIPIR8.NONE_HINT_8 << endl;
-e 	out << "HIPIR9.PRI_HINT_9 = 0x" << hex << intc.HIPIR9.PRI_HINT_9 << endl;
-e 	out << "HIPIR9.NONE_HINT_9 = " << hex << intc.HIPIR9.NONE_HINT_9 << endl;
-e 	out << "HINLR0.NEST_HINT_0 = 0x" << hex << intc.HINLR0.NEST_HINT_0 << endl;
-e 	out << "HINLR0.AUTO_OVERRIDE = " << hex << intc.HINLR0.AUTO_OVERRIDE << endl;
-e 	out << "HINLR1.NEST_HINT_1 = 0x" << hex << intc.HINLR1.NEST_HINT_1 << endl;
-e 	out << "HINLR1.AUTO_OVERRIDE = " << hex << intc.HINLR1.AUTO_OVERRIDE << endl;
-e 	out << "HINLR2.NEST_HINT_2 = 0x" << hex << intc.HINLR2.NEST_HINT_2 << endl;
-e 	out << "HINLR2.AUTO_OVERRIDE = " << hex << intc.HINLR2.AUTO_OVERRIDE << endl;
-e 	out << "HINLR3.NEST_HINT_3 = 0x" << hex << intc.HINLR3.NEST_HINT_3 << endl;
-e 	out << "HINLR3.AUTO_OVERRIDE = " << hex << intc.HINLR3.AUTO_OVERRIDE << endl;
-e 	out << "HINLR4.NEST_HINT_4 = 0x" << hex << intc.HINLR4.NEST_HINT_4 << endl;
-e 	out << "HINLR4.AUTO_OVERRIDE = " << hex << intc.HINLR4.AUTO_OVERRIDE << endl;
-e 	out << "HINLR5.NEST_HINT_5 = 0x" << hex << intc.HINLR5.NEST_HINT_5 << endl;
-e 	out << "HINLR5.AUTO_OVERRIDE = " << hex << intc.HINLR5.AUTO_OVERRIDE << endl;
-e 	out << "HINLR6.NEST_HINT_6 = 0x" << hex << intc.HINLR6.NEST_HINT_6 << endl;
-e 	out << "HINLR6.AUTO_OVERRIDE = " << hex << intc.HINLR6.AUTO_OVERRIDE << endl;
-e 	out << "HINLR7.NEST_HINT_7 = 0x" << hex << intc.HINLR7.NEST_HINT_7 << endl;
-e 	out << "HINLR7.AUTO_OVERRIDE = " << hex << intc.HINLR7.AUTO_OVERRIDE << endl;
-e 	out << "HINLR8.NEST_HINT_8 = 0x" << hex << intc.HINLR8.NEST_HINT_8 << endl;
-e 	out << "HINLR8.AUTO_OVERRIDE = " << hex << intc.HINLR8.AUTO_OVERRIDE << endl;
-e 	out << "HINLR9.NEST_HINT_9 = 0x" << hex << intc.HINLR9.NEST_HINT_9 << endl;
-e 	out << "HINLR9.AUTO_OVERRIDE = " << hex << intc.HINLR9.AUTO_OVERRIDE << endl;
-e 	out << "HIER.ENABLE_HINT = 0x" << hex << intc.HIER.ENABLE_HINT << endl;