# Build settings for host program
.SILENT:

# Project Directories
SRCDIR=.
BUILD=../build/obj-linux
INCLUDES=-I../include -I$(SRCDIR)

# Project Files
TARGET=host
TARGETFILE=$(BUILD)/$(TARGET)
SOURCES=$(wildcard $(SRCDIR)/*.cpp)
OBJECTS=$(patsubst $(SRCDIR)/%.cpp,$(BUILD)/%.o,$(SOURCES))

# Compiler settings
CC=g++
CFLAGS=-c -Wall

# Linker settings
LD=ld
LDFLAGS=
LDLIBS=

# Trigger remomte build is "make all" is run on host
all: pre $(TARGETFILE)
	echo "  Make $(TARGET) has completed."
	echo ""

pre:
	echo "Making $(TARGET)..."
# 	echo "  SOURCES = $(SOURCES)"
# 	echo "  OBJECTS = $(OBJECTS)"
	mkdir -p "$(BUILD)"

$(TARGETFILE): $(OBJECTS)
	echo "  Linking $(TARGET)..."
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS) $(LDLIBS)
	cp $(TARGETFILE) $(BUILD)/..

# Generic rule for building C++
$(BUILD)/%.o: $(SRCDIR)/%.cpp
	echo "  Compiling $@..."
	$(CC) -o $@ $< $(CFLAGS) $(CXXFLAGS) $(INCLUDES)

clean:
	echo "Cleaning $(TARGET)..."
	rm -f $(TARGETFILE) $(OBJECTS)
	rm -f ../$(TARGETFILE)
