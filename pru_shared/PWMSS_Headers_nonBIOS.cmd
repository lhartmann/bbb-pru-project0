MEMORY
{
	PAGE 0:    /* Program Memory */

	PAGE 1:    /* Data Memory */
	PWMSS0      : origin = 0x48300000, length = 0x0000010
	PWMSS1      : origin = 0x48302000, length = 0x0000010
	PWMSS2      : origin = 0x48304000, length = 0x0000010

	EPWM0       : origin = 0x48300200, length = 0x0000042
	EPWM1       : origin = 0x48302200, length = 0x0000042
	EPWM2       : origin = 0x48304200, length = 0x0000042

	ECAP0       : origin = 0x48300100, length = 0x0000060
	ECAP1       : origin = 0x48302100, length = 0x0000060
	ECAP2       : origin = 0x48304100, length = 0x0000060

	EQEP0       : origin = 0x48300180, length = 0x0000060
	EQEP1       : origin = 0x48302180, length = 0x0000060
	EQEP2       : origin = 0x48304180, length = 0x0000060
}

 
SECTIONS
{
   Pwmss0RegsFile    : > PWMSS0,       PAGE = 1
   Pwmss1RegsFile    : > PWMSS1,       PAGE = 1
   Pwmss2RegsFile    : > PWMSS2,       PAGE = 1
 
   EPwm0RegsFile     : > EPWM0,        PAGE = 1
   EPwm1RegsFile     : > EPWM1,        PAGE = 1
   EPwm2RegsFile     : > EPWM2,        PAGE = 1
   
   ECap0RegsFile     : > ECAP0,        PAGE = 1
   ECap1RegsFile     : > ECAP1,        PAGE = 1
   ECap2RegsFile     : > ECAP2,        PAGE = 1

   EQep0RegsFile     : > EQEP0,        PAGE = 1
   EQep1RegsFile     : > EQEP1,        PAGE = 1
   EQep2RegsFile     : > EQEP2,        PAGE = 1
}


/*
//===========================================================================
// End of file.
//===========================================================================
*/
