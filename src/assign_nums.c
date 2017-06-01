/* Header */

#include "../fractal.h"

void   assign_values(t_pixel *pts, double x, double y)
{
  t_pixel *tmp;

  tmp = (t_pixel*)malloc(sizeof(t_pixel));
  while (pts->next != NULL)
    pts = pts->next;
  tmp->x = x;
  tmp->y = y;
  tmp->next = NULL;
  pts->next = tmp;
}

t_pixel  *init_pts(double max_x, double min_x, double max_y, double min_y)
{
    t_pixel *pts;
    t_pixel *tmp;
    double x1;
    double y1;
    int i;

    i = 0;
    y1 = max_y;
    x1 = min_x;
    pts = (t_pixel*)malloc(sizeof(t_pixel));
    pts->x = x1;
    pts->y = y1;
    pts->next = NULL;
    tmp = pts;
    while (y1 > min_y)
    {
        x1 = min_x;
	while (x1 < max_x)
	{
	  assign_values(tmp, x1, y1);
	  tmp = tmp->next;
	  x1 += (0.00801603206);
	}
	y1 -= (0.00400801603);
    }
    pts = pts->next;
    return (pts);
}

t_pixel *diff_nums(t_graph *map)
{
    t_pixel *pts;
    t_pixel *tmp;
    double x1;
    double y1;
    double i, k;

    pts = (t_pixel*)malloc(sizeof(t_pixel));
    i = 0;
    x1 = 0;
    y1 = 0;
    pts->x = 0;
    pts->y = 0;
    //   assign_values(pts, x1, y1);
    pts->next = NULL;
    tmp = pts;
    while (i < map->img_h)
      {
	k = 0;
	while(k < map->img_w)
	  {
	    x1 = 1.5 * ((k - (map->img_w / 2)) / (map->img_w / 2));
	    y1 = ((i  - (map->img_h / 2)) / (map->img_h / 2));
	    assign_values(tmp, x1, y1);
	    tmp = tmp->next;
	    k++;
	  }
	i++;
      }
    pts = pts->next;
    return (pts);
}
