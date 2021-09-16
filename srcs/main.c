/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmeira <fmeira@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:28:14 by fmeira            #+#    #+#             */
/*   Updated: 2021/09/16 22:18:06 by fmeira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_environment	*env;

	if (ac != 2)
		terminate("program usage: ./so_long map.ber");
	if (!(ft_strcmp(&(av[1][(ft_strlen(av[1] - 4))]), ".ber")))
		terminate("map must be a .ber file");
	env = init_env();
	parse_map(av[1], env);
	init_window(env);
	mlx_key_hook(env->win, &move, env);
	mlx_hook(env->win, 17, 1L << 17, &finish, env);
	mlx_loop(env->mlx);
	return (0);
}
