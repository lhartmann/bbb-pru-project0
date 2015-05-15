# Beaglebone Black Project0 makefile
# Lucas Vinicius Hartmann, 2015.
REMOTEDIR=/home/ubuntu/bbb-pru-project0
ARCH=$(shell uname -m)

.SILENT:

all:
ifeq ($(ARCH),armv7l)
	${MAKE} -C linux all
else
	BoneLogin make -s -C "$(REMOTEDIR)/linux" all
endif
	${MAKE} -C pru0  all
	${MAKE} -C pru1  all
	echo "Compilation completed. Binaries are in the build directory."
	echo ""

clean:
	rm -rf build
# 	${MAKE} -C linux clean
# 	${MAKE} -C pru0  clean
# 	${MAKE} -C pru1  clean
# 	rm -f build/DRAMS.img

loadslots:
ifeq ($(ARCH),armv7l)
	echo 'BB-BONE-PRU-01' | sudo tee /sys/devices/bone_capemgr.9/slots > /dev/null
	echo 'bone_pwm_P9_22' | sudo tee /sys/devices/bone_capemgr.9/slots > /dev/null
	echo 'am33xx_pwm'     | sudo tee /sys/devices/bone_capemgr.9/slots > /dev/null
else
	BoneLogin make -s -C "$(REMOTEDIR)" loadslots
endif

unloadslots:
	echo 'Not yet implemented.'
	
run:
ifeq ($(ARCH),armv7l)
	cd build && sudo ./host
else
	BoneLogin make -s -C "$(REMOTEDIR)" loadslots
endif

