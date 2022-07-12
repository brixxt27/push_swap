/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/12 23:03:26 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_exception.h"
#include "error.h"
#include "push_swap.h"
#include "libft.h"

static void	check_argc(int argc)
{
	if (argc < 2)
		exit(0);
}

static void	init_utils_for_exception(int *pi, t_parse *pflag, \
										char ***pargv, t_eos *peos)
{
	*pi = 0;
	*pflag = P_END_OF_STR;
	++(*pargv);
	peos->start = NULL;
	peos->end = NULL;
}

void	check_exception(int argc, char **argv)
{
	int		i;
	int		ret_atoi;
	t_parse	flag;
	t_eos	eos;

	check_argc(argc);
	init_utils_for_exception(&i, &flag, &argv, &eos);
	while (*argv)
	{
		while ((*argv)[i])
		{
			if (ft_isdigit((*argv)[i]))
			{
				if (flag == P_END_OF_STR)
					start = &(*argv)[i];
				else if ((*argv)[i + 1] == ' ' || (*argv)[i + 1] == '\0')
					end = &(*argv)[i];
				flag = P_STR;
			}
			else if (ft_issign((*argv([i]))))
			{
				if(ft_isdigit((*argv)[i + 1]))
					start = &(*argv)[i];
				else
					print_error();
				flag = P_STR;
			}
			else if (ft_isspace((*argv)[i]))
			{
				if (flag == P_STR)
				{
					start = NULL;
					end = NULL;
				}
				flag = P_END_OF_STR;
			}
			else
				print_error();
			i++;
		}
		argv++;
	}		
		
/*
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

			if ((*argv)[i] == '+' || (*argv)[i] == '-')
			{
				if (!ft_isdigit((*argv)[i + 1]))
					check_error(E_IS_NOT_NUM, 0);
				start = &(*argv)[i];
				i++;
			}

static t_parse	check_end_of_string(char *str, int i, t_parse flag,\
									char **pend)
{
	t_parse	ret;
	int		next;

	ret = flag;
	next = i + 1; 
	if (ft_isdigit(str[i]) && str[next] == ' ' || str[next] == '\0')
	{
		ret = P_END_OF_STR;
		*pend = &str[next];
	}
	return (ret);
}

*/
}
