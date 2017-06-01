/* header */

#include "../fractal.h"

void last_piece(unsigned int *color)
{
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

void black_to_more_black(unsigned int *color)
{
  color[72] = 0x000000;
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
  color[87] = 0x000000;
  color[88] = 0x000000;
  last_piece(color);
}

void yellow_to_black(unsigned int *color)
{
  color[48] = 0xDDE3A5;
  color[49] = 0xDBE19F;
  color[50] = 0xD9E09A;
  color[51] = 0xD7DE94;
  color[52] = 0xD5DC8F;
  color[53] = 0xD3DA89;
  color[54] = 0xD0D98;
  color[55] = 0xCED77E;
  color[56] = 0xCCD578;
  color[57] = 0xCAD473;
  color[58] = 0xC8D26D;
  color[59] = 0xC6D067;
  color[60] = 0xC4CE62;
  color[61] = 0xC2CD5C;
  color[62] = 0xC0CB57;
  color[63] = 0xBEC951;
  color[64] = 0xBCC84C;
  color[65] = 0x000000;
  color[66] = 0x000000;
  color[67] = 0x000000;
  color[68] = 0x000000;
  color[69] = 0x000000;
  color[70] = 0x000000;
  color[71] = 0x000000;
  black_to_more_black(color);
}

void white_to_yellow(unsigned int *color)
{
  color[24] = 0xC0BFF8;
  color[25] = 0xC7C7F9;
  color[26] = 0xCFCFFA;
  color[27] = 0xD7D7FA;
  color[28] = 0xDFDFFB;
  color[29] = 0xE7E7FC;
  color[30] = 0xEFEFFD;
  color[31] = 0xF7F7FE;
  color[32] = 0xFFFFFF;
  color[33] = 0xFCFDF9;
  color[34] = 0xFAFBF3;
  color[35] = 0xF8F9EE;
  color[36] = 0xF6F8E8;
  color[37] = 0xF4F6E3;
  color[38] = 0xF2F4DD;
  color[39] = 0xF0F2D7;
  color[40] = 0xEEF1D2;
  color[41] = 0xECEFCC;
  color[42] = 0xEAEDC7;
  color[43] = 0xE7ECC1;
  color[44] = 0xE5EABB;
  color[45] = 0xE3E8B6;
  color[46] = 0xE1E6B0;
  color[47] = 0xDFE5AB;
  yellow_to_black(color);

}

void blue_to_white(unsigned int *color)
{
  color[0] = 0x0300E5;
  color[1] = 0x0A07E5;
  color[2] = 0x120FE6;
  color[3] = 0x1A17E7;
  color[4] = 0x221FE8;
  color[5] = 0x2A27E9;
  color[6] = 0x322FE9;
  color[7] = 0x3A37EA;
  color[8] = 0x423FEB;
  color[9] = 0x4947EC;
  color[10] = 0x514FED;
  color[11] = 0x5957E;
  color[12] = 0x615FEE;
  color[13] = 0x6967EF;
  color[14] = 0x716FF0;
  color[15] = 0x7977F1;
  color[16] = 0x817FF2;
  color[17] = 0x8887F2;
  color[18] = 0x908FF3;
  color[19] = 0x9897F4;
  color[20] = 0xA09FF5;
  color[21] = 0xA8A7F6;
  color[22] = 0xB0AFF6;
  color[23] = 0xB8B7F7;
  white_to_yellow(color);
}
