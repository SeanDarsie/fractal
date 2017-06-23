/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:24:18 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 18:10:24 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	initialize_map(t_graph *map, char *fract)
{
	int	bpp;
	int	endian;

	map->map_func = &mandlebrot_2;
	if (fract[0] == 'j')
		map->map_func = &julia_set1;
	else if (fract[0] == 'm')
		map->map_func = &mandlebrot_3;
	pride(map->color);
	map->mlx = mlx_init();
	map->zoomit = 1;
	map->img_h = 500;
	map->img_w = 700;
	map->incr = 5;
	map->pts = diff_nums(map, 0, 0, 0);
	map->win = mlx_new_window(map->mlx, map->img_w, map->img_h, "fractal");
	map->size_l = 0;
	map->img = mlx_new_image(map->mlx, map->img_w, map->img_h);
	map->addr = (unsigned int*)mlx_get_data_addr(map->img, &bpp,
			&map->size_l, &endian);
	assign_colors(map);
	mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}

void	display_legend(void)
{
	ft_putstr("j: julia\nm: mandlebrot3\n");
	ft_putstr("(default is the classic mandlebrot fractal)\n");
}

void	draw_any_julia(t_graph *map)
{
	t_pixel	*tmp;
	int		i;

	i = 0;
	tmp = map->pts;
	mlx_clear_window(map->mlx, map->win);
	ft_bzero(map->addr, (map->img_w * map->img_h));
	while (tmp && i < (map->img_w * map->img_h))
	{
		map->addr[i] = map->color[mobile_julia(tmp->x, tmp->y, map)];
		i++;
		tmp = tmp->next;
	}
	mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}

int		julia_set6(double x1, double y1, t_graph *map)
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
		tmp = ((sq(x) - sq(y)) + 0.28);
		y = (2 * x * y) + 0.008;
		x = tmp;
		i += map->incr;
	}
	return (i);
}

int		mobile_julia(double x1, double y1, t_graph *map)
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
