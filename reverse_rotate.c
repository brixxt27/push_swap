/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 22:50:10 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 11:40:55 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	rra(t_stack *a, t_print print)
{
	t_node	*temp;

	if (a->top != NULL)
	{
		temp = a->bottom;
		a->bottom = a->bottom->prev;
		a->bottom->next = NULL;
		temp->prev = NULL;
		temp->next = a->top;
		a->top->prev = temp;
		a->top = temp;
	}
	if (print == YES)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(t_stack *b, t_print print)
{
	t_node	*temp;

	if (b->top != NULL)
	{
		temp = b->bottom;
		b->bottom = b->bottom->prev;
		b->bottom->next = NULL;
		temp->prev = NULL;
		temp->next = b->top;
		b->top->prev = temp;
		b->top = temp;
	}
	if (print == YES)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a, NO);
	rrb(b, NO);
	ft_putstr_fd("rrr\n", 1);
}
