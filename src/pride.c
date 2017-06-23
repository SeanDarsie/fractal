/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pride.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:26:08 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:26:40 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	pride5(unsigned int *color)
{
	color[86] = 0x91A108;
	color[87] = 0xC5DA10;
	color[88] = 0xBBDD17;
	color[89] = 0xB1E11F;
	color[90] = 0xA7E527;
	color[91] = 0x9DE82F;
	color[92] = 0x93EC36;
	color[93] = 0x89F03E;
	color[94] = 0x7FF346;
	color[95] = 0x75F74E;
	color[96] = 0x6BFB56;
	color[97] = 0x000000;
	color[98] = 0x000000;
	color[99] = 0x000000;
	color[100] = 0x000000;
}

void	pride4(unsigned int *color)
{
	color[69] = 0xE2E2E2;
	color[70] = 0xC6C6C6;
	color[71] = 0xAAAAAA;
	color[72] = 0x8D8D8D;
	color[73] = 0x717171;
	color[74] = 0x555555;
	color[75] = 0x383838;
	color[76] = 0x1C1C1C;
	color[77] = 0x233426;
	color[78] = 0x2F4022;
	color[79] = 0x3B4C1F;
	color[80] = 0x47581C;
	color[81] = 0x536418;
	color[82] = 0x607015;
	color[83] = 0x6C7C12;
	color[84] = 0x78880E;
	color[85] = 0x84940B;
	pride5(color);
}

void	pride3(unsigned int *color)
{
	color[46] = 0x5F08FF;
	color[47] = 0x6F05FF;
	color[48] = 0x7F02FF;
	color[49] = 0x8F00FF;
	color[50] = 0x8F00FF;
	color[51] = 0x9308F9;
	color[52] = 0x9710F3;
	color[53] = 0x9B19EE;
	color[54] = 0x9F21E8;
	color[55] = 0xA32AE3;
	color[56] = 0xA732DD;
	color[57] = 0xAB3BD8;
	color[58] = 0xAF43D2;
	color[59] = 0xB44CCD;
	color[60] = 0xBC5FD2;
	color[61] = 0xC473D8;
	color[62] = 0xCD87DD;
	color[63] = 0xD59BE3;
	color[64] = 0xDDAFE8;
	color[65] = 0xE6C3EE;
	color[66] = 0xEED7F3;
	color[67] = 0xF6EBF9;
	color[68] = 0xFFFFFF;
	pride4(color);
}

void	pride2(unsigned int *color)
{
	color[23] = 0xAAE90B;
	color[24] = 0x8DED0F;
	color[25] = 0x71F012;
	color[26] = 0x55F416;
	color[27] = 0x38F71A;
	color[28] = 0x1CFB1E;
	color[29] = 0x00FF22;
	color[30] = 0x00FF22;
	color[31] = 0x00E53A;
	color[32] = 0x00CB53;
	color[33] = 0x00B26B;
	color[34] = 0x009884;
	color[35] = 0x007E9C;
	color[36] = 0x0065B5;
	color[37] = 0x004BCD;
	color[38] = 0x0031E6;
	color[39] = 0x0018FF;
	color[40] = 0x0018FF;
	color[41] = 0x0F15FF;
	color[42] = 0x1F12FF;
	color[43] = 0x2F10FF;
	color[44] = 0x3F0DFF;
	color[45] = 0x4F0AFF;
	pride3(color);
}

void	pride(unsigned int *color)
{
	color[0] = 0xF00008;
	color[1] = 0xF10D07;
	color[2] = 0xF31B06;
	color[3] = 0xF52905;
	color[4] = 0xF63704;
	color[5] = 0xF84503;
	color[6] = 0xFA5302;
	color[7] = 0xFB6101;
	color[8] = 0xFD6F00;
	color[9] = 0xFF7D00;
	color[10] = 0xFF7D00;
	color[11] = 0xFF8700;
	color[12] = 0xFF9200;
	color[13] = 0xFF9D00;
	color[14] = 0xFFA800;
	color[15] = 0xFFB300;
	color[16] = 0xFFBE00;
	color[17] = 0xFFC900;
	color[18] = 0xFFD400;
	color[19] = 0xFFDF00;
	color[20] = 0xFFDF00;
	color[21] = 0xE2E203;
	color[22] = 0xC6E607;
	pride2(color);
}
