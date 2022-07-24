/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:13:56 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 11:36:40 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ra(t_stack *a, t_print print)
{
	t_node	*temp;

	if(!a->top)
	{
		temp = a->top;
		a->top = a->top->next;
		a->top->prev = NULL;
		a->bottom->next = temp;
		temp->prev = a->bottom;
		temp->next = NULL;
		a->bottom = temp;
	}
	if (print == YES)
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack *b, t_print print)
{
	t_node	*temp;

	if (!b->top)
	{
		temp = b->top;
		b->top = b->top->next;
		b->top->prev = NULL;
		b->bottom->next = temp;
		temp->prev = b->bottom;
		temp->next = NULL;
		b->bottom = temp;
	}
	if (print == YES)
		ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a, NO);
	rb(b, NO);
	ft_putstr_fd("rr\n", 1);
}
