# Build settings for host program

# Project Files
TOOLPATH=/opt/ti-cgt-pru_2.1.0
SRCDIR=../../pru0
SRCDIRSHARED=../../pru_shared
INCLUDES=-I../../include -I$(TOOLPAH)/include -I$(SRCDIR)
TARGET=pru1.elf
OBJECTS=main.obj fixed.obj PWMSS_VariableDefs.obj TSCADCSS_VariableDefs.obj
LINK_SCRIPTS=../../pru_shared/PRU.cmd ../../pru_shared/PWMSS_Headers_nonBIOS.cmd ../../pru_shared/TSCADCSS_Headers_nonBIOS.cmd

# Compiler settings
CC=$(TOOLPATH)/bin/clpru
CFLAGS=--silicon_version=2 --opt_level=4 --symdebug:dwarf --float_operations_allowed=none --issue_remarks --endian=little --hardware_mac=on --c_src_interlist --output_all_syms -i$(TOOLPATH)/include -i$(TOOLPATH)/lib -i"../../pru1" -i"../../include" -i"../../pru_shared"

# Linker settings
LD=$(TOOLPATH)/bin/clpru
LDFLAGS=-q --run_linker --absolute_exe --code_endian=little --ram_model -i$(TOOLPATH)/include -i$(TOOLPATH)/lib 
LDLIBS=-llibc.a -lrtspruv3_le.lib

# Image Builder
HEX=$(TOOLPATH)/bin/hexpru
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
	cp text.bin ../pru1_text.bin
	cp data.bin ../pru1_data.bin
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
	rm -f ../pru1_text.bin ../pru1_data.bin ../pru_data.bin