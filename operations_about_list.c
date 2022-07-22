/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:32:21 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 21:19:21 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "error.h"

void	list_next(t_stack *ps, int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	check_error(E_MALLOC, (long long)node);
	node->data = data;
	node->index = 0;
	node->next = NULL;
	ps->size++;
	ps->total++;
	if (ps->top == NULL)
	{
		node->prev = NULL;
		ps->top = node;
		ps->bottom = node;
	}
	else
	{
		node->prev = ps->bottom;
		ps->bottom->next = node;
		ps->bottom = node;
	}
}
