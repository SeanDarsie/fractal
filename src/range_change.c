/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range_change.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marmapin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 09:46:49 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/01 09:47:56 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

double cubo(double x)
{
  return (x * x * x);
}

void translation(t_graph *map, double trans, char dir)
{
  t_pixel *tmp;

  tmp = map->pts;
  if (dir == 'x')
    {
      while(tmp)
	{
	  tmp->x += (trans * map->zoom);
	  tmp = tmp->next;
	}
    }
  else
    {
      while (tmp)
	{
	  tmp->y += (trans * map->zoom);
	  tmp = tmp->next;
	}
    } 
}

void change_range(t_graph *map, double scale, int x, int y)
{
  t_pixel *tmp;
  double x1, y1;

  //printf("%f\n", ((double)x / map->img_w));
  x1 = (1.5 * (((double)x - (map->img_w / 2)) / (map->img_w / 2)));
  y1 = ((double)y  - (map->img_h / 2)) / (map->img_h / 2);
  printf("x: %f\ny:: %f\n", x1, y1);
  if (scale < 1.00)
    map->zoom -= 0.1;
  else if (scale > 1.00)
    map->zoom += 0.01;
  if (map->zoom < 0.1)
    map->zoom = 0.1;
  tmp = map->pts;
  while (tmp)
    {
      tmp->x *= scale;
      tmp->y *= scale;
      tmp = tmp->next;
    }
  if (scale < 1)
    {  
      translation(map, x1, 'x');
      translation(map, y1, 'y');
    }
}

void reset_image(t_graph *map)
{
  map->zoom = 0.40000;
  map->pts = diff_nums(map);
  assign_colors(map);
  map->map_func = &mandlebrot_2;
  mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}

/* void	set_hooks(t_graph *map) */
/* { */
/* 	mlx_do_key_autorepeatoff(map->mlx); */
/* 	mlx_hook(map->win, 2, 0, key_press_hook, map); */
/* 	mlx_hook(map->win, 3, 0, key_release_hook, map); */
/* 	mlx_hook(map->win, 4, 0, mouse_press_hook, map); */
/* 	mlx_hook(map->win, 5, 0, mouse_release_hook, map); */
/* 	mlx_hook(map->win, 6, 0, motion_hook, map); */
/* 	mlx_hook(map->win, 12, 0, expose_hook, map); */
/* 	mlx_hook(map->win, 17, 0, exit_hook, map); */
/* } */
