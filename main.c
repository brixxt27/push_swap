/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:31:28 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/01 21:07:27 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_exeception(char **argv)
{
	int	i;

	check_null((void *)argv);
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
			check_error(E_IS_NUM, ft_is_number((*argv)[i]));
		}
		*argv++;
	}
}

int	main(int argc, char *argv[])
{
	check_exeception(argv);
	return (0);
}
