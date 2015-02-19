-b -image     /* Build raw ROM images */

ROMS
{
	PAGE 0:
	text          : origin = 0x00000000, length = 0x00002000, files={text.bin}
	
	PAGE 1:
	data          : origin = 0x00000000, length = 0x00002000, files={data.bin}
	data_shared   : origin = 0x00010000, length = 0x00003000, files={data_shared.bin}
}
