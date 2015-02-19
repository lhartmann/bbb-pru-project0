# Beaglebone Black Project0 makefile
# Lucas Vinicius Hartmann, 2015.

.SILENT:

all:
	${MAKE} -C build/obj-linux all
	${MAKE} -C build/obj-pru0 all
	${MAKE} -C build/obj-pru1 all
	echo "Compilation completed. Binaries are in the build directory."

clean:
	${MAKE} -C build/obj-linux clean
	${MAKE} -C build/obj-pru0  clean
	${MAKE} -C build/obj-pru1  clean
