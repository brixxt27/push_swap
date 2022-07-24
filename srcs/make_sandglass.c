/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_sandglass.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:16:46 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 23:37:22 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_small_value(t_stack *a, t_range *range)
{
	size_t	cnt;
	size_t	flag;
	t_node	*curr;

	cnt = 0;
	flag = 0;
	curr = a->top;
	while (curr->index > range->small + range->big)
	{
		cnt++;
		curr = curr->next;
	}
	if (cnt > a->size / 2)
		flag = 1;
	return (flag);
}

static void	do_it_at_small(t_stack *a, t_stack *b, t_range *range)
{
	pb(a, b, YES);
	range->small++;
}

static void	do_it_at_middle(t_stack *a, t_stack *b, t_range *range)
{
	pb(a, b, YES);
	rb(b, YES);
	range->small++;
}

static void	do_it_at_big(t_stack *a, int flag)
{
	if (flag == 0)
		ra(a, YES);
	else
		rra(a, YES);
}

void	make_sandglass(t_stack *a, t_stack *b)
{
	t_range	range;
	int		flag;

	range.small = 0;
	range.big = 0.000000053 * a->total * a->total + 0.03 * a->total + 14.5;
	while (a->top != NULL)
	{
		flag = find_small_value(a, &range);
		if (a->top->index < range.small)
			do_it_at_small(a, b, &range);
		else if (a->top->index >= range.small && \
					a->top->index <= range.small + range.big)
			do_it_at_middle(a, b, &range);
		else
			do_it_at_big(a, flag);
	}
}
