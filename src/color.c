/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:14:36 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/06 19:23:58 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	ft_black_white(unsigned int *color)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0xFFFFFF;
	while (i < 100)
	{
		color[i] = c;
		c -= (0x020000 + 0x000200 + 0x000002);
		i++;
	}
}

double	sq(double x)
{
	return (x * x);
}

int		mandlebrot_2(double x1, double y1, t_graph *map)
{
	int		i;
	double	x;
	double	y;
	double	xtemp;
	double	two;

	two = 2.0000;
	i = 0;
	x = x1;
	y = y1;
	while (((sq(x) + sq(y)) < 4) && i < 101)
	{
		xtemp = (sq(x) - sq(y)) + x1;
		y = ((two * x * y) + y1);
		x = xtemp;
		i += map->incr;
	}
	return (i);
}

void	assign_colors(t_graph *map)
{
	t_pixel	*tmp;
	int		i;

	i = 0;
	tmp = map->pts;
	mlx_clear_window(map->mlx, map->win);
	ft_bzero(map->addr, (map->img_w * map->img_h));
	while (tmp && i < (map->img_w * map->img_h))
	{
		map->addr[i] = map->color[map->map_func(tmp->x, tmp->y, map)];
		i++;
		tmp = tmp->next;
	}
}
