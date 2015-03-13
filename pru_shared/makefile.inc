# Common PRU build options

# Project Files
SRCDIRSHARED=../../pru_shared
INCLUDES=-I../../include -I$(TOOLPAH)/include -I$(SRCDIR)
LINK_SCRIPTS=../../pru_shared/PRU.cmd ../../pru_shared/PWMSS_Headers_nonBIOS.cmd ../../pru_shared/TSCADCSS_Headers_nonBIOS.cmd

# Compiler settings
CFLAGS=--silicon_version=2 --opt_level=4 --symdebug:dwarf --float_operations_allowed=none --issue_remarks --endian=little --hardware_mac=on --c_src_interlist --output_all_syms -i$(TOOLPATH)/include -i$(TOOLPATH)/lib -i"../../pru0" -i"../../include" -i"../../pru_shared" -I"../../pru_shared"

# Linker settings
LDFLAGS=-q --run_linker --absolute_exe --code_endian=little --ram_model -i$(TOOLPATH)/include -i$(TOOLPATH)/lib 
LDLIBS=-llibc.a -lrtspruv3_le.lib

# Image Builder
IMAGE_SCRIPT=../../pru_shared/PRU_images.cmd

