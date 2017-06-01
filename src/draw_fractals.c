/* header */

#include "../fractal.h"

void draw_mandle_2(t_graph *map)
{
  t_pixel *tmp;
  // unsigned int *color;
  int i;

  i = 0;
  //  map->color = (unsigned int*)malloc(sizeof(unsigned int) * 101);
  //blue_to_white(map->color);
  /* red_to_purple(color); */
  /* ft_black_white(color); */
  /* ft_gradient(color); */
  /* make_first_part(color); */
  tmp = map->pts;
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mandlebrot_2(tmp->x, tmp->y, map->incr)];
      i++;
      tmp = tmp->next;
    }
  //  free(color);
}

void draw_mandle_3(t_graph *map)
{
  t_pixel *tmp;
  //  unsigned int *color;
  int i;

  i = 0;
  /* color = (unsigned int*)malloc(sizeof(unsigned int) * 101); */
  /* blue_to_white(color); */
  /* red_to_purple(color); */
  /* ft_black_white(color); */
  /* ft_gradient(color); */
  /* make_first_part(color); */
  tmp = map->pts;
  // printf("incr %d\n", map->incr);
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mandlebrot_3(tmp->x, tmp->y, map->incr)];
      i++;
      tmp = tmp->next;
    }
}

void draw_mandle_4(t_graph *map)
{
  t_pixel *tmp;
  // unsigned int *color;
  int i;

  i = 0;
  /* color = (unsigned int*)malloc(sizeof(unsigned int) * 101); */
  // blue_to_white(map->color);
  /* red_to_purple(color); */
  /* ft_black_white(color); */
  /* ft_gradient(color); */
  /* make_first_part(color); */
  tmp = map->pts;
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mandlebrot_4(tmp->x, tmp->y, map->incr)];
      i++;
      tmp = tmp->next;
    }
}

void draw_mandle_5(t_graph *map)
{
  t_pixel *tmp;
  //  unsigned int *color;
  int i;

  i = 0;
  /* color = (unsigned int*)malloc(sizeof(unsigned int) * 101); */
  /* blue_to_white(color); */
  /* red_to_purple(color); */
  /* ft_black_white(color); */
  /* ft_gradient(color); */
  /* make_first_part(color); */
  tmp = map->pts;
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mandlebrot_5(tmp->x, tmp->y, map->incr)];
      i++;
      tmp = tmp->next;
    }
}

void draw_mandle_6(t_graph *map)
{
  t_pixel *tmp;
  //  unsigned int *color;
  int i;

  i = 0;
  /* color = (unsigned int*)malloc(sizeof(unsigned int) * 101); */
  /* blue_to_white(color); */
  /* red_to_purple(color); */
  /* ft_black_white(color); */
  /* ft_gradient(color); */
  /* make_first_part(color); */
  tmp = map->pts;
  while (tmp && i < (map->img_w * map->img_h))
    {
      map->addr[i] = map->color[mandlebrot_6(tmp->x, tmp->y, map->incr)];
      i++;
      tmp = tmp->next;
    }
}


