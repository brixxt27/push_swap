/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 23:19:39 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "error.h"
#include "push_swap.h"
#include "libft.h"

static void	do_it_at_digit(t_stat *pflag, t_eos *peos, char *str, \
										t_stack *a)
{
	char	*ret_substr;
	ssize_t	ret_atol;

	if (ft_issign(*(str + 1)))
		print_error();
	if (*pflag == P_END)
		peos->start = str;
	if (*(str + 1) == ' ' || *(str + 1) == '\0')
	{
		peos->end = str;
		ret_substr = ft_substr(peos->start, 0, peos->end - peos->start + 1);
		check_error(E_LIBFT, (long long)ret_substr);
		ret_atol = atol_and_check_int(ret_substr);
		free(ret_substr);
		if (a->top == NULL) // 이거 NULL 로 초기화 된 거임?
			first_list_next(a, (int)ret_atol);
		else
			list_next(a, (int)ret_atol);
		check_exception_and_index(a, (int)ret_atol);
	}
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

static void	init_utils_for_parse(int *pi, t_stat *pflag, \
										t_eos *peos)
{
	*pi = 0;
	*pflag = P_END;
	peos->start = NULL;
	peos->end = NULL;
}

void	parse(char **argv, t_stack *a)
{
	int		i;
	t_stat	flag;
	t_eos	eos;

	++argv;
	while (*argv)
	{
		init_utils_for_parse(&i, &flag, &eos);
		while ((*argv)[i])
		{
			if (ft_isdigit((*argv)[i]))
				do_it_at_digit(&flag, &eos, &(*argv)[i], a);
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
