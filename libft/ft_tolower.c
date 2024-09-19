/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbcvali <vbcvali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:06:59 by vbcvali           #+#    #+#             */
/*   Updated: 2024/09/19 19:08:44 by vbcvali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if (c >= 97 && c <= 122)
        return (c);
    else if (c >= 65 && c <= 90)
        return (c + 32);
    else
        return (c);
}