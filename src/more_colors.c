/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_colors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:17:36 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:18:42 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	last_piece(unsigned int *color)
{
	color[89] = 0xF56152;
	color[90] = 0xF78075;
	color[91] = 0xF9A097;
	color[92] = 0xFBBFBA;
	color[93] = 0xFDDFDC;
	color[94] = 0xFFFFFF;
	color[95] = 0xFFFFFF;
	color[96] = 0xFFFFFF;
	color[97] = 0x000000;
	color[98] = 0x000000;
	color[99] = 0x000000;
	color[100] = 0x000000;
}

void	black_to_more_black(unsigned int *color)
{
	color[72] = 0xCD9037;
	color[73] = 0xCF8934;
	color[74] = 0xD28232;
	color[75] = 0xD47B2F;
	color[76] = 0xD6752D;
	color[77] = 0xD86E2A;
	color[78] = 0xDA6727;
	color[79] = 0xDD6025;
	color[80] = 0xDF5922;
	color[81] = 0xE15220;
	color[82] = 0xE34B1D;
	color[83] = 0xE5441A;
	color[84] = 0xE83D18;
	color[85] = 0xEA3615;
	color[86] = 0xEC2F13;
	color[87] = 0xEE2810;
	color[88] = 0xF34130;
	last_piece(color);
}

void	yellow_to_black(unsigned int *color)
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
	color[65] = 0xBEC149;
	color[66] = 0xC0BA46;
	color[67] = 0xC2B344;
	color[68] = 0xC4AC41;
	color[69] = 0xC7A53F;
	color[70] = 0xC99E3C;
	color[71] = 0xCB9739;
	black_to_more_black(color);
}

void	white_to_yellow(unsigned int *color)
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

void	blue_to_white(unsigned int *color)
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
