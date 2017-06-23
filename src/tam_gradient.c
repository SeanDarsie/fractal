/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tam_gradient.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:08:16 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:37:27 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	tam_gradient5(unsigned int *color)
{
	color[85] = 0xB47FF2;
	color[86] = 0xBF91F4;
	color[87] = 0xC9A3F6;
	color[88] = 0xD4B6F7;
	color[89] = 0xDFC8F9;
	color[90] = 0xE9DAFB;
	color[91] = 0xF4ECFD;
	color[92] = 0xFFFFFF;
	color[93] = 0xFFFFFF;
	color[94] = 0xFFFFFF;
	color[95] = 0xFFFFFF;
	color[96] = 0x000000;
	color[97] = 0x000000;
	color[98] = 0x000000;
	color[99] = 0x000000;
	color[100] = 0x000000;
}

void	tam_gradient4(unsigned int *color)
{
	color[70] = 0x9E008B;
	color[71] = 0x970097;
	color[72] = 0x9100A2;
	color[73] = 0x8A00AD;
	color[74] = 0x8400B8;
	color[75] = 0x7D00C4;
	color[76] = 0x7700CF;
	color[77] = 0x7000DA;
	color[78] = 0x6A00E6;
	color[79] = 0x7412E7;
	color[80] = 0x7F24E9;
	color[81] = 0x8936EB;
	color[82] = 0x9448ED;
	color[83] = 0x9F5BEE;
	color[84] = 0xA96DF0;
	tam_gradient5(color);
}

void	tam_gradient3(unsigned int *color)
{
	color[48] = 0xE37503;
	color[49] = 0xE67700;
	color[50] = 0xE66B01;
	color[51] = 0xE65F03;
	color[52] = 0xE65304;
	color[53] = 0xE64706;
	color[54] = 0xE63B08;
	color[55] = 0xE62F09;
	color[56] = 0xE6230B;
	color[57] = 0xE6170C;
	color[58] = 0xE60B0E;
	color[59] = 0xE60010;
	color[60] = 0xDF001B;
	color[61] = 0xD80026;
	color[62] = 0xD20031;
	color[63] = 0xCB003D;
	color[64] = 0xC50048;
	color[65] = 0xBE0053;
	color[66] = 0xB8005E;
	color[67] = 0xB1006A;
	color[68] = 0xAB0075;
	color[69] = 0xA40080;
	tam_gradient4(color);
}

void	tam_gradient2(unsigned int *color)
{
	color[24] = 0xA44555;
	color[25] = 0xA64751;
	color[26] = 0xA9494E;
	color[27] = 0xAC4B4A;
	color[28] = 0xAE4D47;
	color[29] = 0xB14F44;
	color[30] = 0xB35140;
	color[31] = 0xB6533D;
	color[32] = 0xB95539;
	color[33] = 0xBB5736;
	color[34] = 0xBE5933;
	color[35] = 0xC15B2F;
	color[36] = 0xC35D2C;
	color[37] = 0xC65F28;
	color[38] = 0xC96125;
	color[39] = 0xCB6322;
	color[40] = 0xCE651E;
	color[41] = 0xD0671B;
	color[42] = 0xD36917;
	color[43] = 0xD66B14;
	color[44] = 0xD86D11;
	color[45] = 0xDB6F0D;
	color[46] = 0xDE710A;
	color[47] = 0xE07306;
	tam_gradient3(color);
}

void	tam_gradient(unsigned int *color)
{
	color[0] = 0x6516A7;
	color[1] = 0x6717A3;
	color[2] = 0x6A19A0;
	color[3] = 0x6C1B9C;
	color[4] = 0x6F1D99;
	color[5] = 0x721F95;
	color[6] = 0x742192;
	color[7] = 0x77238F;
	color[8] = 0x7A258B;
	color[9] = 0x7C2788;
	color[10] = 0x7F2984;
	color[11] = 0x812B81;
	color[12] = 0x842D7E;
	color[13] = 0x872F7A;
	color[14] = 0x893177;
	color[15] = 0x8C3373;
	color[16] = 0x8F3570;
	color[17] = 0x91376D;
	color[18] = 0x943969;
	color[19] = 0x973B66;
	color[20] = 0x993D62;
	color[21] = 0x9C3F5F;
	color[22] = 0x9E415C;
	color[23] = 0xA14358;
	tam_gradient2(color);
}
