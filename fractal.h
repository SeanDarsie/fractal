/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 12:51:06 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/22 11:49:29 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTAL_H
# define FRACTAL_H
# define MAX_IT 100
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include "libft/libft.h"
# include "minilibx_macos/mlx.h"

typedef struct		s_color
{
	int	r;
	int	b;
	int	g;
}					t_color;

typedef struct		s_pixel
{
	double			x;
	double			y;
	struct s_pixel	*next;
}					t_pixel;

typedef struct		s_graph
{
	unsigned int	*color;
	int				incr;
	int				(*map_func) (double, double, struct s_graph*);
	double			juliax;
	double			juliay;
	int				img_w;
	int				img_h;
	int				max_it;
	double			zoomin;
	int				zoomit;
	void			*mlx;
	void			*win;
	void			*img;
	uint32_t		*addr;
	int				size_l;
	t_pixel			*pts;
}					t_graph;

int					fract(double epsilon);

void				initialize_map(t_graph *map, char *fract);

void				assign_colors(t_graph *map);

void				display_legend(void);

t_pixel				*init_pts(double max_x,
		double min_x, double max_y, double min_y);

t_pixel				*diff_nums(t_graph *map, double x1, double y1, double i);

void				change_range(t_graph *map, double scale, int x, int y);

void				translation(t_graph *map, double trans, char dir);

void				reset_image(t_graph *map);

double				sq(double x);
double				cubo(double x);

void				set_hooks(t_graph *map);

int					filled_julia(double x1, double y1, t_graph *map);
int					mandlebrot_2(double x1, double y1, t_graph *map);
int					mandlebrot_3(double x1, double y1, t_graph *map);
int					mandlebrot_4(double x1, double y1, t_graph *map);
int					mandlebrot_5(double x1, double y1, t_graph *map);
int					mandlebrot_6(double x1, double y1, t_graph *map);

int					julia_set1(double x1, double y1, t_graph *map);
int					julia_set2(double x1, double y1, t_graph *map);
int					julia_set3(double x1, double y1, t_graph *map);
int					julia_set4(double x1, double y1, t_graph *map);
int					julia_set5(double x1, double y1, t_graph *map);
int					julia_set6(double x1, double y1, t_graph *map);
int					mobile_julia(double x1, double y1, t_graph *map);
int					julia_set_chill(double x1, double y1, t_graph *map);
int					lets_test(double x1, double y1, t_graph *map);

void				draw_any_julia(t_graph *map);
void				draw_mandle_2(t_graph *map);
void				draw_mandle_3(t_graph *map);
void				draw_mandle_4(t_graph *map);
void				draw_mandle_5(t_graph *map);
void				draw_mandle_6(t_graph *map);

void				ft_black_white(unsigned int *color);
void				ft_gradient(unsigned int *color);
void				blue_to_white(unsigned int *color);
void				make_first_part(unsigned int *colors);
void				red_to_purple(unsigned int *color);
void				christmas(unsigned int *color);
void				pride(unsigned int *color);
void				tam_gradient(unsigned int *color);

int					motion_hook(int x, int y, t_graph *map);
void				set_hooks(t_graph *map);
void				turn_off_julia(t_graph *map);

int					julia_set_neg(double x1, double y1, t_graph *map);

#endif
