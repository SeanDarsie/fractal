/* header */

#include "../fractal.h"


void christmas5(unsigned int *color)
{
  	color[87] = 0x000000;
	color[88] = 0x000000;
	color[89] = 0x000000;
	color[90] = 0x000000;
	color[91] = 0x000000;
	color[92] = 0x000000;
	color[93] = 0x000000;
	color[94] = 0x000000;
	color[95] = 0x000000;
	color[96] = 0x000000;
	color[97] = 0x000000;
	color[98] = 0x000000;
	color[99] = 0x000000;
	color[100] = 0x000000;
}

void christmas4(unsigned int *color)
{
  	color[73] = 0x000000;
	color[74] = 0x000000;
	color[75] = 0x000000;
	color[76] = 0x000000;
	color[77] = 0x000000;
	color[78] = 0x000000;
	color[79] = 0x000000;
	color[80] = 0x000000;
	color[81] = 0x000000;
	color[82] = 0x000000;
	color[83] = 0x000000;
	color[84] = 0x000000;
	color[85] = 0x000000;
	color[86] = 0x000000;
	christmas5(color);
}

void christmas3(unsigned int *color)
{
  	color[48] = 0x3F6817;
	color[49] = 0x3D6A17;
	color[50] = 0x3B6C17;
	color[51] = 0x396E17;
	color[52] = 0x377017;
	color[53] = 0x367117;
	color[54] = 0x347318;
	color[55] = 0x327518;
	color[56] = 0x307718;
	color[57] = 0x2E7918;
	color[58] = 0x2C7B18;
	color[59] = 0x2A7D18;
	color[60] = 0x287F18;
	color[61] = 0x268118;
	color[62] = 0x248318;
	color[63] = 0x238519;
	color[64] = 0x000000;
	color[65] = 0x000000;
	color[66] = 0x000000;
	color[67] = 0x000000;
	color[68] = 0x000000;
	color[69] = 0x000000;
	color[70] = 0x000000;
	color[71] = 0x000000;
	color[72] = 0x000000;
	christmas4(color);
}

void christmas2(unsigned int *color)
{
  	color[24] = 0x6D3A14;
	color[25] = 0x6B3C14;
	color[26] = 0x693E14;
	color[27] = 0x674015;
	color[28] = 0x654215;
	color[29] = 0x634415;
	color[30] = 0x614615;
	color[31] = 0x5F4815;
	color[32] = 0x5E4915;
	color[33] = 0x5C4B15;
	color[34] = 0x5A4D15;
	color[35] = 0x584F15;
	color[36] = 0x565116;
	color[37] = 0x545316;
	color[38] = 0x525516;
	color[39] = 0x505716;
	color[40] = 0x4E5916;
	color[41] = 0x4C5B16;
	color[42] = 0x4B5D16;
	color[43] = 0x495E16;
	color[44] = 0x476016;
	color[45] = 0x456217;
	color[46] = 0x436417;
	color[47] = 0x416617;
	christmas3(color);
}

void christmas(unsigned int *color)
{
	color[0] = 0x9B0D12;
	color[1] = 0x990E12;
	color[2] = 0x971012;
	color[3] = 0x951212;
	color[4] = 0x931412;
	color[5] = 0x911612;
	color[6] = 0x8F1812;
	color[7] = 0x8D1A12;
	color[8] = 0x8B1C12;
	color[9] = 0x891E13;
	color[10] = 0x872013;
	color[11] = 0x862113;
	color[12] = 0x842313;
	color[13] = 0x822513;
	color[14] = 0x802713;
	color[15] = 0x7E2913;
	color[16] = 0x7C2B13;
	color[17] = 0x7A2D13;
	color[18] = 0x782F14;
	color[19] = 0x763114;
	color[20] = 0x743314;
	color[21] = 0x733514;
	color[22] = 0x713614;
	color[23] = 0x6F3814;
	christmas2(color);
}
