/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:49:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 15:36:26 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
