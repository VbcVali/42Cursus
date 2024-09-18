/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbengea <vbengea@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:15:39 by vbcvali           #+#    #+#             */
/*   Updated: 2024/09/18 08:57:01 by vbengea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *ptr = (char*)s;

    i = 0;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
