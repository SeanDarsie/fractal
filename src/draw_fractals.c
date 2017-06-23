/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fractals.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:15:53 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/02 21:16:49 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

int	lets_test(double x1, double y1, t_graph *map)
{
	int		i;
	double	x;
	double	y;
	double	xtemp;

	i = 0;
	x = x1;
	y = y1;
	xtemp = 0;
	while ((sq(x) + sq(y)) < 4 && i < 100)
	{
		xtemp = ((cubo(cubo(x))) -
				(36 * sq(y) * sq(x) * sq(x) * cubo(x)) +
				(126 * sq(x) * cubo(x) * sq(sq(y))) -
				(84 * cubo(x) * cubo(sq(y))) +
				(9 * x * sq(sq(sq(y))))) + x1;
		y = ((9 * sq(sq(sq(x))) * y) -
				(84 * cubo(sq(x)) * cubo(y)) +
				(126 * sq(sq(x)) * sq(y) * cubo(y)) -
				(36 * sq(x) * sq(y) * sq(y) * cubo(y))) + y1;
		x = xtemp;
		i += map->incr;
	}
	return (i);
}
