#ifndef LHARTMANN_PRU_H
#define LHARTMANN_PRU_H

#include <BBB/all_structs.h>
#include "prumem.h"

extern prumem_t *pruMapRegisters(int fd);
extern void pruReset(prumem_t *pru, int n);
extern void pruRun(prumem_t *pru, int n);
extern void pruStep(prumem_t *pru, int n);
extern bool pruIsHalted(prumem_t *pru, int n, uint32_t timeout_ms=1000);
extern void pruHalt(prumem_t *pru, int n);

// Return true on error
extern bool pruWaitForHalt(prumem_t *pru, int n, uint32_t timeout_ms=1000);

// Return true on error
extern bool pruLoadProgram(prumem_t *pru, int n, const char *fname);
extern bool pruLoadProgram(prumem_t *pru, const char *code0, const char *data0, const char *code1, const char *data1, const char *datashare);

extern void pruInterruptConfig(prumem_t *pru);

#endif

