# Beaglebone Black Project0 makefile
# Lucas Vinicius Hartmann, 2015.

.SILENT:

all:
	${MAKE} -C obj-linux all
	${MAKE} -C obj-pru0 all
	${MAKE} -C obj-pru1 all
	echo "Compilation completed. Binaries are in the build directory."

clean:
	${MAKE} -C obj-linux clean
	${MAKE} -C obj-pru0  clean
	${MAKE} -C obj-pru1  clean
	rm -f DRAMS.img

loadslots:
	echo 'BB-BONE-PRU-01' | sudo tee /sys/devices/bone_capemgr.9/slots > /dev/null

unloadslots:
	echo 'Not yet implemented.'
	
run:
	sudo ./host

