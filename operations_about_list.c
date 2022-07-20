/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:32:21 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 23:06:58 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"
#include "error.h"

void	first_list_next(t_stack *ps, int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	check_error(E_MALLOC, (long long)node);
	node->data = data;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	ps->top = node;
	ps->bottom = node;
}

void	list_next(t_stack *ps, int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	check_error(E_MALLOC, (long long)node);
	node->data = data;
	node->index = 0;
	node->next = NULL;
	node->prev = ps->bottom;
	ps->bottom = node;
}
