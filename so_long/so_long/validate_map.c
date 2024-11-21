/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbcvali <vbcvali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:17:28 by vbcvali           #+#    #+#             */
/*   Updated: 2024/11/21 18:05:50 by vbcvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

bool	valid_extension(char *file_name)
{
	char	*result;

	result = ft_strnstr(file_name, ".ber", ft_strlen(file_name));
	if (result == NULL)
		return (false);
	else
		return (true);
}

static	bool	is_rectangle(t_game *game)
{
	if (game->same_line_length && (game->size.y < game->size.x))
		return (true);
	return (false);
}

static	bool	valid_start_end(t_game *game)
{
	int	count_start;
	int	count_end;
	int	i;
	int	j;

	i = 0;
	count_end = 0;
	count_start = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == 'P')
				count_start++;
			if (game->map[i][j] == 'E')
				count_end++;
			j++;
		}
		i++;
	}
	if (count_end != 1 || count_start != 1)
		return (false);
	return (true);
}

static	bool	valid_walls(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->size.y)
	{
		if (game->map[i][0] != '1' || game->map[i][game->size.x - 1] != '1')
			return (false);
		i++;
	}
	i = 0;
	while (i < game->size.x)
	{
		if (game->map[0][i] != '1' || game->map[game->size.y - 1][i] != '1')
			return (false);
		i++;
	}
	return (true);
}

bool	valid_map(t_game *game)
{
	if (!is_rectangle(game) || !valid_start_end(game) || !valid_walls(game)
		|| !at_least_one_item(game) || !valid_chars(game))
		return (false);
	if (is_solvable(game))
		return (true);
	// if (!is_rectangle(game))
	// 	printf("Not a rectangle!\n");
	// if (!valid_start_end(game))
	// 	printf("Not a valid start / end!\n");
	// if (!valid_walls(game))
	// 	printf("Not valid walls!\n");
	// if (!at_least_one_item(game))
	// 	printf("No items!\n");
	// if (!is_solvable(game))
	// 	printf("Not solvable!\n");
	// if (!valid_chars(game))
	// 	printf("Not valid chars!\n");
	// printf("Same line length: %d\n", game->same_line_length);
	// printf("Size X: %d\n", game->size.x);
	// printf("Size Y: %d\n", game->size.y);
	return (false);
}
