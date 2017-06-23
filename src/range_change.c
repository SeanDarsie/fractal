/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_change.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 13:10:30 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/22 11:48:47 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

double	cubo(double x)
{
	return (x * x * x);
}

void	multiply(t_graph *map, double scale)
{
	t_pixel *tmp;

	tmp = map->pts;
	while (tmp)
	{
		tmp->x *= scale;
		tmp->y *= scale;
		tmp = tmp->next;
	}
}

void	translation(t_graph *map, double trans, char dir)
{
	t_pixel	*tmp;

	tmp = map->pts;
	if (dir == 'x')
	{
		while (tmp)
		{
			tmp->x += (trans * 1.7);
			tmp = tmp->next;
		}
	}
	else
	{
		while (tmp)
		{
			tmp->y += (trans * 1.7);
			tmp = tmp->next;
		}
	}
}

void	change_range(t_graph *map, double scale, int x, int y)
{
	double	x1;
	double	y1;
	double	offx;
	double	offy;
	double	change;

	x1 = (1.5 * (((double)x - (map->img_w / 2)) / (map->img_w / 2)));
	y1 = ((double)y - (map->img_h / 2)) / (map->img_h / 2);
	map->zoomit++;
	if (map->zoomit % 11 == 0)
		map->zoomin += ((1 - map->zoomin) * 0.1);
	change = 1 - scale;
	offx = x1 * change;
	offy = y1 * change;
	multiply(map, scale);
	translation(map, offx, 'x');
	translation(map, offy, 'y');
}

void	reset_image(t_graph *map)
{
	map->zoomin = 0.950;
	map->zoomit = 1.00;
	map->pts = diff_nums(map, 0, 0, 0);
	assign_colors(map);
	mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}
