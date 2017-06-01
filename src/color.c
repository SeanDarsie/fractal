/* header */

#include "../fractal.h"

void ft_black_white(unsigned int *color)
{
  int i;
  unsigned int C;

  i = 0;
  C = 0xFFFFFF;
  while(i < 100)
    {
      color[i] = C;
      C -= (0x020000 +0x000200 + 0x000002);
      i++;
    }
  
}

double sq(double x)
{
  return (x * x);
}

int mandlebrot_2(double x1, double y1, int incr)
{
  int i;
  double x;
  double y;
  double xtemp;
  double two;

  two = 2.0000;
    i = 0;
    x = x1;
    y = y1;
    while (abs((sq(x) + sq(y)) < 4) && i < 101)
    {
      xtemp = (sq(x) - sq(y)) + x1;
      y = ((two * x * y) + y1);
      x = xtemp;
      i += incr;
     }
    return (i);
}

void assign_colors(t_graph *map)
{
  t_pixel *tmp;
  int i;

  i = 0;
  tmp = map->pts;
  mlx_clear_window(map->mlx, map->win);
  bzero(map->addr, (map->img_w * map->img_h));
  //printf("x: %f\ny: %f\n", tmp->x, tmp->y);
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[map->map_func(tmp->x, tmp->y, map->incr)];
      i++;
      //if (tmp->next == NULL)
	//	printf("x: %f\ny: %f\n", tmp->x, tmp->y);	
      tmp = tmp->next;
    }
  
}
