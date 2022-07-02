/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exeception.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/02 19:01:10 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	check_argc(int argc)
{
	if (argc < 2)
		exit(0);
}

void	check_exeception(int argc, char **argv)
{
	int	i;

	check_argc(argc);
	i = 0;
	argv++;
	while (*argv)
	{
		while ((*argv)[i])
		{
			if (ft_isspace((*argv)[i]))
			{
				i++;
				continue ;
			}
			check_error(E_IS_NUM, ft_isdigit((*argv)[i]));
			i++;
		}
		argv++;
	}
	ft_putstr_fd("Success", 1);
}
