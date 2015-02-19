/*-cr         /* Initialize variables while loading program, not while running. */
--stack=0x400 /* Stack space */
--heap=0      /* Memory space for malloc. Disabled, not realtime friendly. */
-m "pru.map"

MEMORY
{
	PAGE 0:    /* Program Memory */
	IRAM          : origin = 0x00000000, length = 0x00002000

	PAGE 1:    /* Data Memory */
	DRAM          : origin = 0x00000000, length = 0x00002000
	DRAM_NEIGHBOR : origin = 0x00002000, length = 0x00002000
	DRAM_SHARED   : origin = 0x00010000, length = 0x00003000
	
	INTC          : origin = 0x00020000, length = 0x00000001
	PRU0CTL       : origin = 0x00022000, length = 0x00000001
	PRU1CTL       : origin = 0x00024000, length = 0x00000001
	CFG           : origin = 0x00026000, length = 0x00000001
	UART0         : origin = 0x00028000, length = 0x00000001
	IEP           : origin = 0x0002E000, length = 0x00000001
/*	ECAP0         : origin = 0x00030000, length = 0x00000001 /* Conflicts with global definition */
	MII_RT_CFG    : origin = 0x00032000, length = 0x00000001
	MII_MDIO      : origin = 0x00032400, length = 0x00000001
}

SECTIONS
{
	/* User Code Sections */
	.text       : >  IRAM, PAGE = 0
	
	/* User Data Sections */
	.cinit      : >  DRAM, PAGE = 1
	.data       : >  DRAM, PAGE = 1
	.fardata    : >  DRAM, PAGE = 1
	.init_array : >  DRAM, PAGE = 1
	.rodata     : >  DRAM, PAGE = 1
	.rofardata  : >  DRAM, PAGE = 1
	.args       : >  DRAM, PAGE = 1
	.bss        : >  DRAM, PAGE = 1
	.farbss     : >  DRAM, PAGE = 1
	.stack      : >  DRAM, PAGE = 1
	.sysmem     : >  DRAM, PAGE = 1
	
	/* System Register Data Sections */
	PruIntcRegsFile     : > INTC,       PAGE = 1
	Pru0ControlRegsFile : > PRU0CTL,    PAGE = 1
	Pru0ControlRegsFile : > PRU1CTL,    PAGE = 1
	PruConfigRegsFile   : > CFG,        PAGE = 1
	UART0_RegsFile      : > UART0,      PAGE = 1
	IEP_RegsFile        : > IEP,        PAGE = 1
	ECAP0_RegsFile      : > ECAP0,      PAGE = 1
	MII_RT_CFG_RegsFile : > MII_RT_CFG, PAGE = 1
	MII_MDIO_RegsFile   : > MII_MDIO,   PAGE = 1
}
