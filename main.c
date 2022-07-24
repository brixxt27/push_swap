/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/24 23:03:04 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "push_swap.h"

static void	sort(t_stack *a, t_stack *b)
{
	make_sandglass(a, b);
	sort_big_one_first(a, b);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		exit(0);
	a = init_stack();
	b = init_stack();
	parse(argv, a);
	check_order(a);
	if (a->total < 6)
		less_than_five(a, b);
	else
		sort(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
