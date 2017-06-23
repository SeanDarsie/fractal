/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_hooks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:23:55 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/22 15:17:22 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

int		motion_hook(int x, int y, t_graph *map)
{
	if ((x > 0 && x < map->img_w) && (y > 0 && y < map->img_h))
	{
		map->juliax = (1.5 * (((double)x -
						(map->img_w / 2)) / (map->img_w / 2)));
		map->juliay = ((double)y - (map->img_h / 2)) / (map->img_h / 2);
		map->map_func = julia_set_chill;
		draw_any_julia(map);
	}
	return (0);
}

int		julia_off(int x, int y, t_graph *map)
{
	if (x > 0 && x < map->img_w && y > 0 && y < map->img_h)
	{
		x = 0;
		y = 0;
	}
	return (map->img_h);
}

void	turn_off_julia(t_graph *map)
{
	ft_putstr("julia mode halted.\n");
	mlx_hook(map->win, 6, 0, julia_off, map);
	map->map_func = &julia_set_chill;
}

int		julia_set_chill(double x1, double y1, t_graph *map)
{
	int		i;
	double	x;
	double	y;
	double	tmp;

	i = 0;
	x = x1;
	y = y1;
	tmp = 0;
	while ((sq(x) + sq(y)) < 4 && i < 100)
	{
		tmp = ((sq(x) - sq(y)) + map->juliax);
		y = (2 * x * y) + map->juliay;
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		julia_set_neg(double x1, double y1, t_graph *map)
{
	int		i;
	double	x;
	double	y;
	double	tmp;

	i = 100;
	x = x1;
	y = y1;
	tmp = 0;
	while ((sq(x) + sq(y)) < 4 && i >= 0)
	{
		tmp = ((sq(x) - sq(y)) - 0.79);
		y = (2 * x * y) - 0.15;
		x = tmp;
		i -= map->incr;
	}
	return (i);
}
