/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 19:05:34 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/23 14:00:26 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

int		key_color(int keynum, t_graph *map)
{
	if (keynum == 82)
		map->map_func = &julia_set_neg;
	if (keynum == 23)
		christmas(map->color);
	if (keynum == 5)
		set_hooks(map);
	if (keynum == 4)
		turn_off_julia(map);
	if (keynum == 89)
		map->map_func = &lets_test;
	if (keynum == 18)
		blue_to_white(map->color);
	if (keynum == 19)
		red_to_purple(map->color);
	if (keynum == 20)
		make_first_part(map->color);
	if (keynum == 21)
		pride(map->color);
	if (keynum == 22)
		tam_gradient(map->color);
	if (keynum == 11)
		reset_image(map);
	return (keynum);
}

int		key2(int keynum, t_graph *map)
{
	if (keynum == 34)
		map->incr--;
	if (map->incr < 1)
		map->incr = 1;
	if (keynum == 2)
		map->incr++;
	if (map->incr > 10)
		map->incr = 10;
	if (keynum == 38)
		map->map_func = &filled_julia;
	if (keynum == 84)
		map->map_func = mandlebrot_2;
	if (keynum == 85)
		map->map_func = &mandlebrot_3;
	if (keynum == 86)
		map->map_func = &mandlebrot_4;
	if (keynum == 87)
		map->map_func = &mandlebrot_5;
	if (keynum == 88)
		map->map_func = &mandlebrot_6;
	if (keynum == 12)
		map->map_func = &julia_set1;
	assign_colors(map);
	mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
	return (keynum);
}

int		keyboard(int keynum, t_graph *map)
{
	if (keynum == 53)
		exit(1);
	if (keynum == 26)
		ft_black_white(map->color);
	if (keynum == 123)
		translation(map, 0.00559, 'x');
	if (keynum == 124)
		translation(map, -0.00559, 'x');
	if (keynum == 125)
		translation(map, -0.00559, 't');
	if (keynum == 126)
		translation(map, 0.00559, 'o');
	if (keynum == 13)
		map->map_func = &julia_set2;
	if (keynum == 14)
		map->map_func = &julia_set3;
	if (keynum == 15)
		map->map_func = &julia_set4;
	if (keynum == 16)
		map->map_func = &julia_set5;
	if (keynum == 17)
		map->map_func = &julia_set6;
	key_color(keynum, map);
	key2(keynum, map);
	return (0);
}

int		mouse(int click, int x, int y, t_graph *map)
{
	if (click == 4)
		change_range(map, map->zoomin, x, y);
	if (click == 5)
		change_range(map, map->zoomin + (2 - (2 * map->zoomin)), x, y);
	mlx_clear_window(map->mlx, map->win);
	ft_bzero(map->addr, (map->img_h * map->img_w));
	assign_colors(map);
	mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
	return (click);
}

int		main(int ac, char **av)
{
	t_graph	*map;

	if (ac != 2)
	{
		display_legend();
		exit(1);
	}
	map = (t_graph*)malloc(sizeof(t_graph));
	map->pts = (t_pixel*)malloc(sizeof(t_pixel));
	map->color = (unsigned int*)malloc(sizeof(unsigned int) * 101);
	initialize_map(map, av[1]);
	map->zoomin = 0.9500;
	map->zoomit = 1;
	mlx_hook(map->win, 2, 3, keyboard, map);
	mlx_hook(map->win, 4, 2, mouse, map);
	mlx_loop(map->mlx);
	free(map);
}
