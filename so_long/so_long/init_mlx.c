/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbcvali <vbcvali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:49:36 by vbcvali           #+#    #+#             */
/*   Updated: 2024/11/19 19:04:44 by vbcvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_mlx(t_game *game)
{
	game->vars.mlx = mlx_init();

	if (game->vars.mlx == NULL) {
		fprintf(stderr, "Error: Failed to initialize MiniLibX\n");
		free_map(game);
		exit(0);
	}
	game->vars.win = mlx_new_window(game->vars.mlx, 800, 600, "My first window");
	if (game->vars.win == NULL) {
		fprintf(stderr, "Error: Failed to create a new window\n");
		free_map(game);
		exit(0);
	}
	so_long(game);
	mlx_loop(game->vars.mlx);
}
