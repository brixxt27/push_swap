/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 21:33:05 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	// t_stack b;

	if (argc < 2)
		exit(0);
	// init_stack(&a);
	// init_stack(&b);
	parse(argv, &a);
	// 정렬
	// print
	return (0);
}
