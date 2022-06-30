/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/06/30 21:12:25 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_exeception(char **argv)
{
	int	i;

	check_error(E_ARGV, (long long)argv);
	i = 0;
	while (*argv)
	{
		while ((*argv)[i])
		*argv++;
	}
}

int	main(int argc, char *argv[])
{
	check_exeception(argv);
	return (0);
}
