# Build settings for host program
SRCDIR=../../pru1
TARGET=pru1.elf
OBJECTS=main.obj fixed.obj PWMSS_VariableDefs.obj TSCADCSS_VariableDefs.obj PRU_VariableDefs.obj

include ../../pru_shared/makefile-$(shell uname -m).inc
include ../../pru_shared/makefile.inc

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
