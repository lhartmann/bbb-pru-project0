#ifndef LHARTMANN_PRUMEM_H
#define LHARTMANN_PRUMEM_H
#include <stdint.h>

#include <BBB/all_structs.h>

#define PRU_RAMREF(bytes)    \
	union {                  \
		uint8_t  u8 [bytes]; \
		uint16_t u16[bytes/2];     \
		uint32_t u32[bytes/4];     \
	} 

#define PRU_TOKENPASTEs(x,y) x##y
#define PRU_TOKENPASTE(x,y) PRU_TOKENPASTEs(x,y)
#define PRU_RESERVE(bytes) uint8_t PRU_TOKENPASTE(_rsvd_, __LINE__)[bytes]

#define PRU_OFFSET_DRAM0      0x00000u
#define PRU_OFFSET_DRAM1      0x02000u
#define PRU_OFFSET_DRAMS      0x10000u
#define PRU_OFFSET_INTC       0x20000u
#define PRU_OFFSET_PRU0CTL    0x22000u
#define PRU_OFFSET_PRU0DBG    0x22400u
#define PRU_OFFSET_PRU1CTL    0x24000u
#define PRU_OFFSET_PRU1DBG    0x24400u
#define PRU_OFFSET_CFG        0x26000u
#define PRU_OFFSET_UART0      0x28000u
#define PRU_OFFSET_IEP        0x2E000u
#define PRU_OFFSET_ECAP0      0x30000u
#define PRU_OFFSET_MII_RT_CFG 0x32000u
#define PRU_OFFSET_MII_MDIO   0x32400u
#define PRU_OFFSET_IRAM0      0x34000u
#define PRU_OFFSET_IRAM1      0x38000u
#define PRU_OFFSET_END        0x40000u

struct prumem_t {
	// PRU0 Data Ram at 0x0000_0000
	PRU_RAMREF(0x2000) DRAM0;
	PRU_RESERVE(PRU_OFFSET_DRAM1 - PRU_OFFSET_DRAM0 - sizeof(DRAM0));
	
	// PRU1 Data Ram at 0x0000_2000
	PRU_RAMREF(0x2000) DRAM1;
	PRU_RESERVE(PRU_OFFSET_DRAMS - PRU_OFFSET_DRAM1 - sizeof(DRAM1));
	
	// PRU Shared Data Ram at 0x0001_0000, length 0x3000
	PRU_RAMREF(0x3000) DRAMS;
	PRU_RESERVE(PRU_OFFSET_INTC - PRU_OFFSET_DRAMS - sizeof(DRAMS));
	
	// PRU INTC registers at 0x0002_0000
	pru_icss_intc_regs_t INTC;
	PRU_RESERVE(PRU_OFFSET_PRU0CTL - PRU_OFFSET_INTC - sizeof(INTC));
	
	// PRU0 Control Registers at 0x0002_2000
	pru_control_frame_t PRU0CTL;
	PRU_RESERVE(PRU_OFFSET_PRU0DBG - PRU_OFFSET_PRU0CTL - sizeof(PRU0CTL));
	
	// PRU0 Debug Registers at 0x0002_2400
	pru_debug_frame_t PRU0DBG;
	PRU_RESERVE(PRU_OFFSET_PRU1CTL - PRU_OFFSET_PRU0DBG - sizeof(PRU0DBG));
	
	// PRU1 Control Registers at 0x0002_4000
	pru_control_frame_t PRU1CTL;
	PRU_RESERVE(PRU_OFFSET_PRU0DBG - PRU_OFFSET_PRU0CTL - sizeof(PRU1CTL));
	
	// PRU1 Debug Registers at 0x0002_4400
	pru_debug_frame_t PRU1DBG;
	PRU_RESERVE(PRU_OFFSET_CFG - PRU_OFFSET_PRU1DBG - sizeof(PRU1DBG));
	
	// PRU Config Registers at 0x0002_6000
	pru_config_frame_t CFG;
	PRU_RESERVE(PRU_OFFSET_UART0 - PRU_OFFSET_CFG - sizeof(CFG));

	// UART0 Registers at 0x28000
	PRU_RESERVE(PRU_OFFSET_IEP - PRU_OFFSET_UART0);

	// IEP Registers at 0x2E000
	PRU_RESERVE(PRU_OFFSET_ECAP0 - PRU_OFFSET_IEP);

	// eCAP0 registers at 0x30000
	PRU_RESERVE(PRU_OFFSET_MII_RT_CFG - PRU_OFFSET_ECAP0);

	// MII_RT_CFG at 0x32000
	PRU_RESERVE(PRU_OFFSET_MII_MDIO - PRU_OFFSET_MII_RT_CFG);

	// MII_MDIO at 0x32400
	PRU_RESERVE(PRU_OFFSET_IRAM0 - PRU_OFFSET_MII_MDIO);

	// PRU0 Instruction RAM at 0x34000
	PRU_RAMREF(0x2000) IRAM0;
	PRU_RESERVE(PRU_OFFSET_IRAM1 - PRU_OFFSET_IRAM0 - sizeof(IRAM0));

	// PRU1 Instruction RAM ar 0x38000
	PRU_RAMREF(0x2000) IRAM1;
	PRU_RESERVE(PRU_OFFSET_END - PRU_OFFSET_IRAM1 - sizeof(IRAM1));

	// Reserved memory at 0x40000
};

#endif
