/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/01 15:50:00 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_is_number(char c)
{
	if (!ft_is_number)
}

void	check_exeception(char **argv)
{
	int	i;

	check_error(E_ARGV_EMPTY, (long long)argv);
	i = 0;
	while (*argv)
	{
		while ((*argv)[i])
		{
			if (ft_is_space((*argv)[i]))
			{
				i++;
				continue ;
			}
			check_is_number((*argv)[i]);
		}
		*argv++;
	}
}

int	main(int argc, char *argv[])
{
	check_exeception(argv);
	return (0);
}
