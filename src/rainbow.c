/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rainbow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 17:27:12 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:28:33 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	red_to_purple5(unsigned int *color)
{
	color[96] = 0x000000;
	color[97] = 0x000000;
	color[98] = 0x000000;
	color[99] = 0x000000;
	color[100] = 0x000000;
}

void	red_to_purple4(unsigned int *color)
{
	color[72] = 0x24AB12;
	color[73] = 0x21A815;
	color[74] = 0x1EA51B;
	color[75] = 0x1BA21E;
	color[76] = 0x159F21;
	color[77] = 0x129C24;
	color[78] = 0x0F9927;
	color[79] = 0x0C962A;
	color[80] = 0x09932D;
	color[81] = 0x069000;
	color[82] = 0x038D00;
	color[83] = 0x008A00;
	color[84] = 0x008700;
	color[85] = 0x000000;
	color[86] = 0x000000;
	color[87] = 0x000000;
	color[88] = 0x000000;
	color[89] = 0x000000;
	color[90] = 0x000000;
	color[91] = 0x000000;
	color[92] = 0x000000;
	color[93] = 0x000000;
	color[94] = 0x000000;
	color[95] = 0x000000;
	red_to_purple5(color);
}

void	red_to_purple3(unsigned int *color)
{
	color[48] = 0x6C7B00;
	color[49] = 0x697E00;
	color[50] = 0x668100;
	color[51] = 0x638400;
	color[52] = 0x608700;
	color[53] = 0x5D8A00;
	color[54] = 0x5A8D00;
	color[55] = 0x579000;
	color[56] = 0x549300;
	color[57] = 0x519600;
	color[58] = 0x4E9900;
	color[59] = 0x4B9C00;
	color[60] = 0x489F00;
	color[61] = 0x45A200;
	color[62] = 0x42A500;
	color[63] = 0x3FA800;
	color[64] = 0x3CAB00;
	color[65] = 0x39AE00;
	color[66] = 0x36B100;
	color[67] = 0x33B403;
	color[68] = 0x30B706;
	color[69] = 0x2DB409;
	color[70] = 0x2AB10C;
	color[71] = 0x27AE0F;
	red_to_purple4(color);
}

void	red_to_purple2(unsigned int *color)
{
	color[24] = 0xB43300;
	color[25] = 0xB13600;
	color[26] = 0xAE3900;
	color[27] = 0xAB3C00;
	color[28] = 0xA83F00;
	color[29] = 0xA54200;
	color[30] = 0xA24500;
	color[31] = 0x9F4800;
	color[32] = 0x9A1B00;
	color[33] = 0x994E00;
	color[34] = 0x965100;
	color[35] = 0x935400;
	color[36] = 0x905700;
	color[37] = 0x8D5A00;
	color[38] = 0x8A5D00;
	color[39] = 0x876000;
	color[40] = 0x846300;
	color[41] = 0x816600;
	color[42] = 0x7E6900;
	color[43] = 0x7B6C00;
	color[44] = 0x786F00;
	color[45] = 0x757200;
	color[46] = 0x727500;
	color[47] = 0x6F7800;
	red_to_purple3(color);
}

void	red_to_purple(unsigned int *color)
{
	color[0] = 0xFFA1A1;
	color[1] = 0xFCA1A1;
	color[2] = 0xF9A1A1;
	color[3] = 0xF6A1A1;
	color[4] = 0xF3A1A1;
	color[5] = 0xF0A1A1;
	color[6] = 0xEDA1A1;
	color[7] = 0xEAA1A1;
	color[8] = 0xE7A1A1;
	color[9] = 0xE4A1A1;
	color[10] = 0xE1A1A1;
	color[11] = 0xDEA1A1;
	color[12] = 0xD8A1A1;
	color[13] = 0xD5A1A1;
	color[14] = 0xD2A1A1;
	color[15] = 0xCFA1A1;
	color[16] = 0xCCA1A1;
	color[17] = 0xC9A1A1;
	color[18] = 0xC6A1A1;
	color[19] = 0xC3A1A1;
	color[20] = 0xC0A1A1;
	color[21] = 0xBDA1A1;
	color[22] = 0xBAA1A1;
	color[22] = 0xB7A1A1;
	red_to_purple2(color);
}
