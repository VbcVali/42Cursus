/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbengea <vbengea@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:53:49 by vbcvali           #+#    #+#             */
/*   Updated: 2024/09/23 08:47:03 by vbengea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*new_string;
	int		i;
	int		j;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc(sizeof(char) * total_len + 1);
	if (!(new_string))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		new_string[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new_string[j++] = s2[i++];
	new_string[j] = '\0';
	return (new_string);
}
