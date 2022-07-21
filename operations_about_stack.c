/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:05:27 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/21 16:42:34 by jayoon           ###   ########.fr       */
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

void	first_push(t_stack *ps, t_node *node)
{
	ps->top = node;
	ps->bottom = node;
	ps->size = 1;
	node->next = NULL;
	node->prev = NULL;
}

void	push(t_stack *ps, t_node *node)
{
	node->next = ps->top;
	ps->top->prev = node;
	node->prev = NULL;
	ps->top = node;
	ps->size++;
}

t_node	*pop(t_stack *ps)
{
	t_node	*node;

	node = ps->top;
	ps->top = ps->top->next;
	ps->top->prev = NULL;
	node->next = NULL;
	return (node);
}
