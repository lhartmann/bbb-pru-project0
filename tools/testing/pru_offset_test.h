#ifndef LHARTMANN_PRU_OFFSET_TEST_H
#define LHARTMANN_PRU_OFFSET_TEST_H
#include "pru.h"

#define fail(XXX) { \
	cerr << hex << "Failed offset for " #XXX ". Expected 0x" << PRU_OFFSET_##XXX << ", got 0x" << ((uint8_t*)&pru. XXX - (uint8_t*)&pru) << "." << endl << dec; \
}

inline bool test_offsets() {
	prumem_t pru;
	bool r = false; // no error
	if ((uint8_t*)&pru.DRAM1 - (uint8_t*)&pru != PRU_OFFSET_DRAM1) {
		fail(DRAM1);
		r = true;
	}
	if ((uint8_t*)&pru.DRAM0 - (uint8_t*)&pru != PRU_OFFSET_DRAM0) {
		fail(DRAM0);
		r = true;
	}
	if ((uint8_t*)&pru.DRAMS - (uint8_t*)&pru != PRU_OFFSET_DRAMS) {
		fail(DRAMS);
		r = true;
	}
	if ((uint8_t*)&pru.INTC - (uint8_t*)&pru != PRU_OFFSET_INTC) {
		fail(INTC);
		r = true;
	}
	if ((uint8_t*)&pru.PRU0CTL - (uint8_t*)&pru != PRU_OFFSET_PRU0CTL) {
		fail(PRU0CTL);
		r = true;
	}
	if ((uint8_t*)&pru.PRU0DBG - (uint8_t*)&pru != PRU_OFFSET_PRU0DBG) {
		fail(PRU0DBG);
		r = true;
	}
	if ((uint8_t*)&pru.PRU1CTL - (uint8_t*)&pru != PRU_OFFSET_PRU1CTL) {
		fail(PRU1CTL);
		r = true;
	}
	if ((uint8_t*)&pru.PRU1DBG - (uint8_t*)&pru != PRU_OFFSET_PRU1DBG) {
		fail(PRU1DBG);
		r = true;
	}
	if ((uint8_t*)&pru.CFG - (uint8_t*)&pru != PRU_OFFSET_CFG) {
		fail(CFG);
		r = true;
	}
/*	if ((uint8_t*)&pru.UART0 - (uint8_t*)&pru != PRU_OFFSET_UART0) {
		fail(UART0);
		r = true;
	}
	if ((uint8_t*)&pru.IEP - (uint8_t*)&pru != PRU_OFFSET_IEP) {
		fail(IEP);
		r = true;
	}
	if ((uint8_t*)&pru.ECAP0 - (uint8_t*)&pru != PRU_OFFSET_ECAP0) {
		fail(ECAP0);
		r = true;
	}
	if ((uint8_t*)&pru.MII_RT_CFG - (uint8_t*)&pru != PRU_OFFSET_MII_RT_CFG) {
		fail(MII_RT_CFG);
		r = true;
	}
	if ((uint8_t*)&pru.MII_MDIO - (uint8_t*)&pru != PRU_OFFSET_MII_MDIO) {
		fail(MII_MDIO);
		r = true;
	}
*/	if ((uint8_t*)&pru.IRAM0 - (uint8_t*)&pru != PRU_OFFSET_IRAM0) {
		fail(IRAM0);
		r = true;
	}
	if ((uint8_t*)&pru.IRAM1 - (uint8_t*)&pru != PRU_OFFSET_IRAM1) {
		fail(IRAM1);
		r = true;
	}
	if (sizeof(pru) != PRU_OFFSET_END) {
		cerr << hex << "Failed size of PRU memory. Expected 0x" << PRU_OFFSET_END << ", got 0x" << sizeof(pru) << "." << endl << dec;
		r = true;
	}
	return r;
}

#undef fail

#endif
