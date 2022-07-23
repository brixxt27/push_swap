/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_than_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 17:21:06 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/23 17:40:15 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// 아래 지우기
// #include <stdio.h>
// static void	print_stack(t_stack *a, char c)
// {
// 	t_node	*curr;

// 	curr = a->top;
// 	printf("stack %c : \n", c);
// 	while (curr)
// 	{
// 		printf("%d\n", curr->data);
// 		curr = curr->next;
// 	}
// }
// 여기까지 지우기

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

static void	pb_until_there_are_three(t_stack *a, t_stack *b)
{
	size_t	cnt;
	size_t	idx;
	size_t	i;
	t_node	*node;

	idx = 0;
	while (idx < a->total - 3)
	{
		node = a->top;
		cnt = 1;
		while (node->index != idx)
		{
			node = node->next;
			cnt++;
		}
		if (cnt != 1 && cnt <= a->total / 2)
			ra(a, YES);
		else if (cnt > a->total / 2)
		{
			i = a->size - cnt + 1;
			while (i)
			{
				rra(a, YES);
				i--;
			}
		}
		pb(a, b);
		idx++;
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
		pb_until_there_are_three(a, b);
		sort_at_three(a);
		pa(a, b);
	}
	else if (a->total == 5)
	{
		pb_until_there_are_three(a, b);
		sort_at_three(a);
		pa(a, b);
		pa(a, b);
	}
}
