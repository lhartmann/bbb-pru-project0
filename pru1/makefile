# Build settings for pru0 program
.SILENT:

# Project Directories
SRCDIR=.
SRCDIRSHARED=../pru_shared
BUILD=../build/obj-pru1

# Project Files
TARGET=pru1.elf
TARGETFILE=$(BUILD)/$(TARGET)
SOURCES=$(wildcard $(SRCDIR)/*.cpp $(SRCDIRSHARED)/*.cpp)
OBJECTS=$(patsubst $(SRCDIRSHARED)/%.cpp,$(BUILD)/%.obj,$(patsubst $(SRCDIR)/%.cpp,$(BUILD)/%.obj,$(SOURCES)))

include $(SRCDIRSHARED)/makefile-$(shell uname -m).inc
include $(SRCDIRSHARED)/makefile.inc

all: pre $(TARGETFILE)
	echo "  Make $(TARGET) has completed."
	echo ""

pre:
	echo "Making $(TARGET)..."
	mkdir -p "$(BUILD)"
# 	echo "  SOURCES = $(SOURCES)"
# 	echo "  OBJECTS = $(OBJECTS)"

$(TARGETFILE): $(OBJECTS)
	echo "  Linking $(TARGET)..."
	$(LD) $(LDFLAGS) $(LINK_SCRIPTS) $(OBJECTS) --output_file=$(TARGETFILE) $(LDLIBS)
	echo "  Generating raw images..."
	$(HEX) -q $(IMAGE_SCRIPT) $(TARGETFILE)
	mv text.bin $(BUILD)/../pru1_text.bin
	mv data.bin $(BUILD)/../pru1_data.bin
	mv data_shared.bin $(BUILD)/../pru_data.bin
	mv pru.map $(BUILD)

# Generic rule for building C++
$(BUILD)/%.obj: $(SRCDIR)/%.cpp
	echo "  Compiling $@..."
	$(CC) $(CFLAGS) -c $<

$(BUILD)/%.obj: $(SRCDIRSHARED)/%.cpp
	echo "  Compiling $@..."
	$(CC) $(CFLAGS) -c $<

clean:
	echo "Cleaning $(TARGET)..."
	rm -f $(TARGETFILE) *.obj *.asm *.map *.elf *.bin
	rm -f ../pru1_text.bin ../pru1_data.bin ../pru_data.bin
