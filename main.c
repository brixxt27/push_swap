/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 21:21:17 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "push_swap.h"

// 아래 지우기
#include <stdio.h>
static void	print_stack(t_stack *a, char c)
{
	t_node	*curr;

	curr = a->top;
	printf("stack %c : \n", c);
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
	if (a->total < 6)
		less_than_five(a, b);
	// else
	// 	sort();
	print_stack(a, 'A');
	print_stack(b, 'B');
	free_stack(a);
	free_stack(b);
	return (0);
}
