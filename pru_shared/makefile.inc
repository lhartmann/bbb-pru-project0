# Common PRU build options

# Project Files
SRCDIRSHARED=../pru_shared
INCLUDES=-I../include -I$(TOOLPAH)/include -I$(SRCDIR) -I$(SRCDIRSHARED)
LINK_SCRIPTS=$(SRCDIRSHARED)/PRU.cmd $(SRCDIRSHARED)/PWMSS_Headers_nonBIOS.cmd $(SRCDIRSHARED)/TSCADCSS_Headers_nonBIOS.cmd

# Compiler settings
CFLAGS=--silicon_version=2 --opt_level=4 --symdebug:dwarf --float_operations_allowed=none --issue_remarks --endian=little --hardware_mac=on --c_src_interlist --output_all_syms -i$(TOOLPATH)/include -i$(TOOLPATH)/lib $(INCLUDES) -fb=$(BUILD) -fs=$(BUILD) -ff=$(BUILD) -fr=$(BUILD) -ft=$(BUILD)

# Linker settings
LDFLAGS=-q --run_linker --absolute_exe --code_endian=little --ram_model -i$(TOOLPATH)/include -i$(TOOLPATH)/lib
LDLIBS=-llibc.a -lrtspruv3_le.lib

# Image Builder
IMAGE_SCRIPT=$(SRCDIRSHARED)/PRU_images.cmd

