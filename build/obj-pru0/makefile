# Build settings for host program

# Project Files
#TOOLPATH=/opt/ti-cgt-pru_2.1.0
TOOLPATH=/usr/share/ti/cgt-pru
SRCDIR=../../pru0
SRCDIRSHARED=../../pru_shared
INCLUDES=-I../../include -I$(TOOLPAH)/include -I$(SRCDIR)
TARGET=pru0.elf
OBJECTS=main.obj fixed.obj PWMSS_VariableDefs.obj TSCADCSS_VariableDefs.obj PRU_VariableDefs.obj
LINK_SCRIPTS=../../pru_shared/PRU.cmd ../../pru_shared/PWMSS_Headers_nonBIOS.cmd ../../pru_shared/TSCADCSS_Headers_nonBIOS.cmd

# Compiler settings
#CC=$(TOOLPATH)/bin/clpru
CC=clpru
CFLAGS=--silicon_version=2 --opt_level=4 --symdebug:dwarf --float_operations_allowed=none --issue_remarks --endian=little --hardware_mac=on --c_src_interlist --output_all_syms -i$(TOOLPATH)/include -i$(TOOLPATH)/lib -i"../../pru0" -i"../../include" -i"../../pru_shared" -I"../../pru_shared"

# Linker settings
#LD=$(TOOLPATH)/bin/clpru
LD=clpru
LDFLAGS=-q --run_linker --absolute_exe --code_endian=little --ram_model -i$(TOOLPATH)/include -i$(TOOLPATH)/lib 
LDLIBS=-llibc.a -lrtspruv3_le.lib

# Image Builder
#HEX=$(TOOLPATH)/bin/hexpru
HEX=hexpru
IMAGE_SCRIPT=../../pru_shared/PRU_images.cmd

all: pre $(TARGET)
	echo "  Make $(TARGET) has completed."
	echo ""

pre:
	echo "Making $(TARGET)..."

$(TARGET): $(OBJECTS)
	echo "  Linking $(TARGET)..."
	$(LD) $(LDFLAGS) $(LINK_SCRIPTS) $(OBJECTS) --output_file=$(TARGET) $(LDLIBS)
	echo "  Generating raw images..."
	$(HEX) -q $(IMAGE_SCRIPT) $(TARGET)
	cp text.bin ../pru0_text.bin
	cp data.bin ../pru0_data.bin
	cp data_shared.bin ../pru_data.bin

# Generic rule for building C++
%.obj: $(SRCDIR)/%.cpp
	echo "  Compiling $@..."
	$(CC) $(CFLAGS) -c $<

%.obj: $(SRCDIRSHARED)/%.cpp
	echo "  Compiling $@..."
	$(CC) $(CFLAGS) -c $<

clean:
	echo "Cleaning $(TARGET)..."
	rm -f $(TARGET) *.obj *.asm *.map *.elf *.bin
	rm -f ../pru0_text.bin ../pru0_data.bin ../pru_data.bin
