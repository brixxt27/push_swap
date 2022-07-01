/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/01 17:54:05 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	check_is_number(char c)
{
	check_error(E_IS_NUM, ft_is_number(c));
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
