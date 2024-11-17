/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbcvali <vbcvali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:21:00 by vbcvali           #+#    #+#             */
/*   Updated: 2024/11/17 13:00:07 by vbcvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_map map;

	if (argc != 2 || !valid_extension(argv[1]))
		return (1);

	init_map(&map, argv[1]);

	if (!valid_map(&map))
	{
		printf("Not a valid map !\n");
		free_map(&map);
		exit(0);
	}

	init_mlx(&map);

	return (0);
}