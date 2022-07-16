/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:32:21 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/16 19:13:29 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

void	first_list_next(t_stack *ps, int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	check_error(E_SYS_CALL, (long long)node);
	node->data = data;
	node->index = 0;
	node->next = node;
	node->prev = node;
	ps->top = node;
	ps->bottom = node;
}

void	list_next(t_stack *ps, int data)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	check_error(E_SYS_CALL, (long long)node);
	node->data = data;
	node->index = 0;
	node->next = ps->top;
	node->prev = ps->bottom;
	ps->top->prev = node;
	ps->bottom->next = node;
	ps->bottom = node;
}
