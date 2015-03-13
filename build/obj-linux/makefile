# Build settings for host program

# Project Files
TARGET=host
OBJECTS=ihx.o pru.o uio_wrapper.o main.o
SRCDIR=../../linux
INCLUDES=-I../../include -I$(SRCDIR)

# Compiler settings
CC=g++
CFLAGS=-c -Wall

# Linker settings
LD=ld
LDFLAGS=
LDLIBS=

all: pre $(TARGET)
	echo "  Make $(TARGET) has completed."
	echo ""

pre:
	echo "Making $(TARGET)..."
ifneq ($(shell uname -m), armv7l)
	echo "  WARNING: $(TARGET) should be compiled on the BBB."
endif

$(TARGET): $(OBJECTS)
	echo "  Linking $(TARGET)..."
	$(CC) $(LDFLAGS) -o $@ $(OBJECTS) $(LDLIBS)
	cp $(TARGET) ..

# Generic rule for building C++
%.o: $(SRCDIR)/%.cpp
	echo "  Compiling $@..."
	$(CC) -o $@ $< $(CFLAGS) $(CXXFLAGS) $(INCLUDES)

clean:
	echo "Cleaning $(TARGET)..."
	rm -f $(TARGET) $(OBJECTS)
	rm -f ../$(TARGET)
