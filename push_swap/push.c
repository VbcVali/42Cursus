/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbengea <vbengea@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:43:33 by vbcvali           #+#    #+#             */
/*   Updated: 2024/10/24 10:41:27 by vbengea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*temp;

	if (b && *b)
	{
		temp = *b;
		*b = (*b)->next;
		if (*b)
			(*b)->prev = NULL;
		temp->next = *a;
		if (*a)
			(*a)->prev = temp;
		temp->prev = NULL;
		*a = temp;
	}
	write (1, "pa\n", 3);
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*temp;

	if (a && *a)
	{
		temp = *a;
		*a = (*a)->next;
		if (*a)
			(*a)->prev = NULL;
		temp->next = *b;
		if (*b)
			(*b)->prev = temp;
		temp->prev = NULL;
		*b = temp;
	}
	write (1, "pb\n", 3);
}
