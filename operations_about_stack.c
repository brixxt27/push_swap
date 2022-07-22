/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:05:27 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 19:47:40 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "push_swap.h"

t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	check_error(E_MALLOC, (long long)stack);
	stack->size = 0;
	stack->top = NULL;
	stack->bottom = NULL;
	return (stack);
}

void	push(t_stack *ps, t_node *node)
{
	if (ps->top == NULL)
	{
		ps->top = node;
		ps->bottom = node;
		ps->size++;
	}
	else
	{
		node->next = ps->top;
		ps->top->prev = node;
		node->prev = NULL;
		ps->top = node;
		ps->size++;
	}
}

t_node	*pop(t_stack *ps)
{
	t_node	*node;

	if (!ps->top)
		return (NULL);
	node = ps->top;
	ps->top = ps->top->next;
	ps->size--;
	ps->top->prev = NULL;
	node->next = NULL;
	return (node);
}

void	free_stack(t_stack *a)
{
	t_node	*curr;
	t_node	*temp;

	curr = a->top;
	while (curr)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	free(a);
}
