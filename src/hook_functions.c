/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarsie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 21:21:07 by sdarsie           #+#    #+#             */
/*   Updated: 2017/06/03 17:51:26 by sdarsie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractal.h"

void	set_hooks(t_graph *map)
{
	ft_putstr("julia mode activated.\n");
	mlx_do_key_autorepeatoff(map->mlx);
	mlx_hook(map->win, 6, 0, motion_hook, map);
}
