# Beaglebone Black Project0 makefile
# Lucas Vinicius Hartmann, 2015.

.SILENT:

all:
	${MAKE} -C build all

clean:
	${MAKE} -C build clean

loadslots:
	${MAKE} -C build loadslots

unloadslots:
	${MAKE} -C build unloadslots
	
run:
	${MAKE} -C build run


