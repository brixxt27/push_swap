/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/21 18:16:26 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "push_swap.h"

#include <stdio.h>
static void	print_stack(t_stack *a)
{
	t_node	*curr;

	curr = a->top;
	printf("stack A : \n");
	while (curr)
	{
		printf("%d\n", curr->data);
		curr = curr->next;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack *b;

	if (argc < 2)
		exit(0);
	a = init_stack();
	b = init_stack();
	parse(argv, a);
	check_order(a);
	// 정렬
	print_stack(a);
	return (0);
}
