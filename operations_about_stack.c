/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_about_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:05:27 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/16 19:13:29 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "push_swap.h"

void	init_stack(t_stack *ps)
{
	ps = malloc(sizeof(t_stack));
	check_error(E_SYS_CALL, (long long)ps);
	ps->size = 0;
	ps->top = NULL;
	ps->bottom = NULL;
}

// ps->top == NULL
void	first_push(t_stack *ps, t_node *node)
{
	ps->top = node;
	ps->bottom = node;
	ps->size = 1;

}
