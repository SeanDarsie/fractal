/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_julia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:17:05 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:11:52 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

int		julia_set1(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) - 0.79);
		y = (2 * x * y) - 0.15;
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		julia_set2(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) - 1.62);
		y = (2 * x * y) + 1.04;
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		julia_set3(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) + 0.30);
		y = (2 * x * y) - 0.01;
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		julia_set4(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) - 1.476);
		y = (2 * x * y);
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		julia_set5(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) - 0.12);
		y = (2 * x * y) - 0.77;
		x = tmp;
		i += map->incr;
	}
	return (i);
}
