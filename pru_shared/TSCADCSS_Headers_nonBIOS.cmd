MEMORY
{
	PAGE 0:    /* Program Memory */

	PAGE 1:    /* Data Memory */
	ADC         : origin =  0x44E0D000, length = 0x00000204     /* ADC registers */
}

SECTIONS
{
	AdcRegsFile       : > ADC,         PAGE = 1
}