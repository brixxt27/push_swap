/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_one_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:38:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 23:37:11 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_one_first(t_stack *a, t_stack *b)
{
	t_node	*curr;
	size_t	i;
	size_t	cnt;

	while (b->top)
	{
		curr = b->top;
		i = b->size - 1;
		cnt = 0;
		while (curr->index != i)
		{
			cnt++;
			curr = curr->next;
		}
		if (cnt <= i / 2)
			while (b->top->index != i)
				rb(b, YES);
		else if (cnt > i / 2)
			while (b->top->index != i)
				rrb(b, YES);
		pa(a, b, YES);
	}
}
