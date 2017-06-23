/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gradients.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:19:56 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/02 21:20:54 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

static void	make_second_part(unsigned int *colors)
{
	colors[17] = 0x5C8BF0;
	colors[18] = 0x5384EF;
	colors[19] = 0x497DEE;
	colors[20] = 0x4077ED;
	colors[21] = 0x3670EC;
	colors[22] = 0x2D69EB;
	colors[23] = 0x2362EA;
	colors[24] = 0x1A5CEA;
}

static void	make_third_part(unsigned int *colors)
{
	colors[25] = 0x1A5CEA;
	colors[26] = 0x195CE3;
	colors[27] = 0x185CDD;
	colors[28] = 0x175CD7;
	colors[29] = 0x175CD0;
	colors[30] = 0x165CCA;
	colors[31] = 0x155CC4;
	colors[32] = 0x155CBD;
	colors[33] = 0x145CB7;
	colors[34] = 0x135CB1;
	colors[35] = 0x125CAB;
	colors[36] = 0x125CA4;
	colors[37] = 0x115C9E;
	colors[38] = 0x105D98;
	colors[39] = 0x105C91;
	colors[40] = 0x0F5C8B;
	colors[41] = 0x0E5C85;
	colors[42] = 0x0D5C7F;
	colors[43] = 0x0D5C78;
	colors[44] = 0x0C5C72;
	colors[45] = 0x0B5C6C;
	colors[46] = 0x0B5C65;
	colors[47] = 0x0A5C5F;
	colors[48] = 0x095C59;
	colors[49] = 0x095D53;
}

static void	make_fourth_part(unsigned int *colors)
{
	colors[50] = 0x095D53;
	colors[51] = 0x096250;
	colors[52] = 0x09674D;
	colors[53] = 0x0A6C4B;
	colors[54] = 0x0A7148;
	colors[55] = 0x0A7645;
	colors[56] = 0x0B7C43;
	colors[57] = 0x0B8140;
	colors[58] = 0x0C833D;
	colors[59] = 0x0C8B3B;
	colors[60] = 0x0C9038;
	colors[61] = 0x0D9535;
	colors[62] = 0x0D9B33;
	colors[63] = 0x0DA030;
	colors[64] = 0x0EA52D;
	colors[65] = 0x0EAA2B;
	colors[66] = 0x0FAF28;
	colors[67] = 0x0FB425;
	colors[68] = 0x0FBA23;
	colors[69] = 0x10BF20;
	colors[70] = 0x10C41D;
	colors[71] = 0x10C91B;
	colors[72] = 0x11CE18;
	colors[73] = 0x11D315;
	colors[74] = 0x12D913;
}

static void	make_fifth_part(unsigned int *colors)
{
	colors[75] = 0x12D913;
	colors[76] = 0x1BDA1C;
	colors[77] = 0x25DC26;
	colors[78] = 0x2FDD30;
	colors[79] = 0x39DF3A;
	colors[80] = 0x43E044;
	colors[81] = 0x4DE24E;
	colors[82] = 0x57E457;
	colors[83] = 0x61E561;
	colors[84] = 0x68E76B;
	colors[85] = 0x74E875;
	colors[86] = 0x7EEA7F;
	colors[87] = 0x88EC89;
	colors[88] = 0x92ED92;
	colors[89] = 0x9CEF96;
	colors[90] = 0xA6F0A6;
	colors[91] = 0xB0F2B0;
	colors[92] = 0xB9F3BA;
	colors[93] = 0xC3F5C4;
	colors[94] = 0xCDF7CD;
	colors[95] = 0xD7F8D7;
	colors[96] = 0xE1FAE1;
	colors[97] = 0xEBFBEB;
	colors[98] = 0xF5FDF5;
	colors[99] = 0xFFFFFF;
}

void		make_first_part(unsigned int *colors)
{
	colors[0] = 0xFFFFFF;
	colors[1] = 0xF5F8FE;
	colors[2] = 0xEBF1FD;
	colors[3] = 0xE2EAFC;
	colors[4] = 0xD8E3FB;
	colors[5] = 0xCFDDFA;
	colors[6] = 0xC5D6F9;
	colors[7] = 0xBCCFF8;
	colors[8] = 0xB2C8F8;
	colors[9] = 0xA9C1F7;
	colors[10] = 0x9FBBF6;
	colors[11] = 0x96B4F5;
	colors[12] = 0x8CADF4;
	colors[13] = 0x82ACF3;
	colors[14] = 0x799FF2;
	colors[15] = 0x6F99F1;
	colors[16] = 0x6692F1;
	make_second_part(colors);
	make_third_part(colors);
	make_fourth_part(colors);
	make_fifth_part(colors);
}
