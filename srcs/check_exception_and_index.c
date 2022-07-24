/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception_and_index.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:23:08 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/21 16:57:12 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "error.h"

void	check_duplication_and_index(t_stack *a, int data)
{
	t_node	*curr;

	curr = a->top;
	while (curr->next)
	{
		if (curr->data == data)
			print_error();
		if (curr->data > data)
			curr->index++;
		else if (curr->data < data)
			a->bottom->index++;
		curr = curr->next;
	}
}
