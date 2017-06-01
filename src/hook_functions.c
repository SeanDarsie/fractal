/* header */

#include "../fractal.h"

void	set_hooks(t_graph *map)
{
	mlx_do_key_autorepeatoff(map->mlx);
	mlx_hook(map->win, 2, 0, key_press_hook, map);
	mlx_hook(map->win, 3, 0, key_release_hook, map);
	mlx_hook(map->win, 4, 0, mouse_press_hook, map);
	mlx_hook(map->win, 5, 0, mouse_release_hook, map);
	mlx_hook(map->win, 6, 0, motion_hook, map);
	mlx_hook(map->win, 12, 0, expose_hook, map);
	mlx_hook(map->win, 17, 0, exit_hook, map);
}
