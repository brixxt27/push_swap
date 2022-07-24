/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:49:46 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 23:34:50 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	pa(t_stack *a, t_stack *b, t_print print)
{
	t_node	*temp;

	temp = pop(b);
	push(a, temp);
	if (print == YES)
		ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack *a, t_stack *b, t_print print)
{
	t_node	*temp;

	temp = pop(a);
	push(b, temp);
	if (print == YES)
		ft_putstr_fd("pb\n", 1);
}
