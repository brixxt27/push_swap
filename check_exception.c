/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/14 17:11:17 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exception.h"
#include "error.h"
#include "push_swap.h"
#include "libft.h"

static void	do_it_at_digit_and_parse(t_stat *pflag, t_eos *peos, char *str, \
										int i)
{
	char	*ret_substr;
	ssize_t	ret_atol;

	if (ft_issign(str[i + 1]))
		print_error();
	if (*pflag == P_END)
		peos->start = &str[i];
	else if (str[i + 1] == ' ' || str[i + 1] == '\0')
	{
		peos->end = &str[i];
		ret_substr = ft_substr(str, i - (peos->end - peos->start), peos->end \
								- peos->start + 1);
		check_error(E_LIBFT, ret_substr);
		ret_atol = ft_atol(ret_substr);
		if (!ft_isint(ret_atol))
			print_error();
		check_double_and_index()
		// atol 로 int 자료형인지 확인하기
			// atol 로 변환
			// return 이 int 값인지 확인
				// 아니면 print error
		// linked list tail 쪽에 push 하면서 중복 검사 및 indexing
			// head 부터 쭉 검사
			// 크기 비교하며 indexing 함
			// tail 만날 때나 node 의 개수만큼 다 돈다면 push
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
				do_it_at_digit_and_parse(&flag, &eos, *argv, i);
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
