/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/13 21:35:16 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception.h"
#include "error.h"
#include "push_swap.h"
#include "libft.h"

static void	do_it_at_digit(t_stat *pflag, t_eos *peos, char *str, int i)
{
	if (ft_issign(str[i + 1]))
		print_error();
	if (*pflag == P_END)
		peos->start = &str[i];
	else if (str[i + 1] == ' ' || str[i + 1] == '\0')
		peos->end = &str[i];
	*pflag = P_NOT_END;
}

static void	do_it_at_sign(t_stat *pflag, t_eos *peos, char *str, int i)
{
	if (ft_isdigit(str[i + 1]))
		peos->start = &str[i];
	else
		print_error();
	*pflag = P_NOT_END;
}

static void	do_it_at_space(t_stat *pflag)
{
	*pflag = P_END;
}

static void	init_utils_for_exception(int *pi, t_stat *pflag, \
										t_eos *peos)
{
	*pi = 0;
	*pflag = P_END;
	peos->start = NULL;
	peos->end = NULL;
}

void	check_exception_and_parse(char **argv)
{
	int		i;
	t_stat	flag;
	t_eos	eos;

	++argv;
	while (*argv)
	{
		init_utils_for_exception(&i, &flag, &eos);
		while ((*argv)[i])
		{
			if (ft_isdigit((*argv)[i]))
				do_it_at_digit(&flag, &eos, *argv, i);
			else if (ft_issign((*argv)[i]))
				do_it_at_sign(&flag, &eos, *argv, i);
			else if (ft_isspace((*argv)[i]))
				do_it_at_space(&flag);
			else
				print_error();
			i++;
		}
		if (eos.start == NULL)
			print_error();
		argv++;
	}		
}
