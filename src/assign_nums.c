/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_nums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:11:54 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 18:04:12 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	assign_values(t_pixel *pts, double x, double y)
{
	t_pixel	*tmp;

	tmp = (t_pixel*)malloc(sizeof(t_pixel));
	while (pts->next != NULL)
		pts = pts->next;
	tmp->x = x;
	tmp->y = y;
	tmp->next = NULL;
	pts->next = tmp;
}

t_pixel	*diff_nums(t_graph *map, double x1, double y1, double i)
{
	t_pixel	*pts;
	t_pixel	*tmp;
	double	k;

	pts = (t_pixel*)malloc(sizeof(t_pixel));
	pts->x = 0;
	pts->y = 0;
	pts->next = NULL;
	tmp = pts;
	while (i < map->img_h)
	{
		k = 0;
		while (k < map->img_w)
		{
			x1 = 1.5 * ((k - (map->img_w / 2)) / (map->img_w / 2));
			y1 = ((i - (map->img_h / 2)) / (map->img_h / 2));
			assign_values(tmp, x1, y1);
			tmp = tmp->next;
			k++;
		}
		i++;
	}
	pts = pts->next;
	return (pts);
}
