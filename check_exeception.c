/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exeception.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/05 16:21:51 by jayoon           ###   ########.fr       */
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
	int		i;
	char	*start;
	char	*end;
	t_parse	flag;

	check_argc(argc);
	i = 0;
	flag = P_NUM;
	++argv;
	while (argv)
	{
		while ((*argv)[i])
		{
			// 공백이면 다음 문자로 이동
			if (is_space(*argv, &i) == TRUE)
				continue ;
			/*
			부호면
				다음 문자 확인하고 숫자가 아닐 시 에러
				start = 현재 문자 주소
				i++
			*/
			/*
			숫자면
				
			*/
			if ((*argv)[i] == ' ')
			{
				i++;
				continue ; // 또는 flag 사용
			}
			if ((*argv)[i] == '+' || (*argv)[i] == '-')
			{
				if (!ft_isdigit((*argv)[i + 1]) || flag == P_SIGN)
					check_error(E_IS_NOT_NUM, 0);
				start = &(*argv)[i];
				flag = P_SIGN;
				i++;
			}
		}
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
*/
}
