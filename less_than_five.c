/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:21:06 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 23:01:27 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_at_three(t_stack *a)
{
	if (a->top->index == a->total - 3 && a->top->next->index == a->total - 1)
	{
		sa(a, YES);
		ra(a, YES);
	}
	else if (a->top->index == a->total - 2)
	{
		if (a->top->next->index == a->total - 3)
			sa(a, YES);
		else
			rra(a, YES);
	}
	else if (a->top->index == a->total - 1)
	{
		if (a->top->next->index == a->total - 3)
			ra(a, YES);
		else
		{
			sa(a, YES);
			rra(a, YES);
		}
	}
}

static void	pb_until_three(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		pb(a, b);
	}	
}

void	less_than_five(t_stack *a, t_stack *b)
{
	if (a->total == 2)
		sa(a, YES);
	else if (a->total == 3)
		sort_at_three(a);
	else if (a->total == 4)
	{
		pb_until_three(a, b);
		sort_at_three(a);
		pa(a, b);
	}
	else if (a->total == 5)
	{
		pb_until_three(a, b);
		sort_at_three(a);
		pa(a, b);
		pa(a, b);
	}
}
