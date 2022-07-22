/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:21:06 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 20:41:52 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_at_three(t_stack *a)
{
	if (a->top->index == a->size - 3)
	{
		sa(a);
		ra(a);
	}
	else if (a->top->index == a->size - 2)
	{
		if (a->top->next->index == 0)
			sa(a);
		else
			ra(a);
	}
	else
	{
		if (a->top->index == 2)
			ra(a);
		else
		{
			ra(a);
			ra(a);
		}
	}
}

static void	pb_until_three(t_stack *a, t_stack *b)
{
	whlie (a->size > 3)
	{
		pb(a, b);
	}	
}

void	less_than_five(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		sort_at_three(a);
	else if (a->size == 4)
	{
		pb_until_three(a, b);
		sort_at_three(a);
		pa(a, b);
	}
	else if (a->size == 5)
	{
		pb_until_three(a, b);
		sort_at_three(a);
		pa(a, b);
		pa(a, b);
	}
}
