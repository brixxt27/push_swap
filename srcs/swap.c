/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 20:35:24 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 22:28:12 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	sa(t_stack *a, t_print print)
{
	int	temp_d;
	int	temp_i;

	temp_d = a->top->data;
	a->top->data = a->top->next->data;
	a->top->next->data = temp_d;
	temp_i = a->top->index;
	a->top->index = a->top->next->index;
	a->top->next->index = temp_i;
	if (print == YES)
		ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *b, t_print print)
{
	int	temp_d;
	int	temp_i;

	temp_d = b->top->data;
	b->top->data = b->top->next->data;
	b->top->next->data = temp_d;
	temp_i = b->top->index;
	b->top->index = b->top->next->index;
	b->top->next->index = temp_i;
	if (print == YES)
		ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a, NO);
	sb(b, NO);
	ft_putstr_fd("ss\n", 1);
}
