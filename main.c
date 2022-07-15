/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/15 21:00:15 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception.h"
#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack b;

	if (argc < 2)
		exit(0);
	init_stack(&a);
	init_stack(&b);
	check_exception_and_parse(argv);
	// parsing
	// 연결 리스트에 저장
	// 정렬
	// print
	return (0);
}
