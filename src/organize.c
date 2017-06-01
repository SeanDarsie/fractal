#include "../fractal.h"

void initialize_map(t_graph *map)
{
  int bpp;
  int endian;
  
  map->map_func = &mandlebrot_2;
  pride(map->color);
  map->mlx = mlx_init();
  map->img_h = 500;
  map->img_w = 650;
  map->zoom = 1.0000;
  map->juliax = 0.280000;
  map->juliay = 0.00800;
  map->incr = 5;
  map->zoom = 0.40000;
  map->pts = diff_nums(map);
  map->win = mlx_new_window(map->mlx, map->img_w, map->img_h, "fractal");
  map->size_l = 0;
  map->img = mlx_new_image(map->mlx,map->img_w, map->img_h);
  map->addr = (unsigned int*)mlx_get_data_addr(map->img, &bpp,
					       &map->size_l , &endian);
  assign_colors(map);
  mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}

void display_legend(void)
{
  printf("%s\n", "legend placeholder.");
     /* ft_putstr("Legend:\n\n"); */
     /* ft_putstr("use the number pad 2, 3, 4, 5, 6 to switch between mandlebrot fractals.\n");  */
     /* ft_putstr("use the keyboards numbers 1 through 4 to select a color pattern.\n"); */
     /* ft_putstr("arrow keys move the image.\n"); */
     /* ft_putstr("mouse_wheel zooms in and out.\n"); */
}

void draw_any_julia(t_graph *map)
{
   t_pixel *tmp;
   int i;

  i = 0;
  tmp = map->pts;
  mlx_clear_window(map->mlx, map->win);
  bzero(map->addr, (map->img_w * map->img_h));
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mobile_julia(tmp->x, tmp->y, map)];
      i++;
      tmp = tmp->next;
    }
   mlx_put_image_to_window(map->mlx, map->win, map->img, 0, 0);
}

int julia_set6(double x1, double y1, int incr)
{
  int i;
  double x;
  double y;
  double tmp;

  i = 0;
  x = x1;
  y = y1;
  tmp = 0;
  while ((sq(x) + sq(y)) < 4 && i < 100)
    {
      tmp = ((sq(x) - sq(y)) + 0.28);
      y = (2 * x * y) + 0.008;
      x = tmp;
      i += incr;
    }
  return (i);
}

int mobile_julia(double x1, double y1, t_graph *map)
{
  int i;
  double x;
  double y;
  double tmp;

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
