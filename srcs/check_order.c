/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:01:50 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 23:25:17 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_order(t_stack *a)
{
	t_node	*curr;
	t_bool	is_sorted;

	curr = a->top;
	is_sorted = TRUE;
	while (curr->next)
	{
		if (curr->data > curr->next->data)
			is_sorted = FALSE;
		curr = curr->next;
	}
	if (is_sorted == TRUE)
		exit(0);
}
