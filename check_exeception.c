/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exeception.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/07 21:37:45 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

static void	check_argc(int argc)
{
	if (argc < 2)
		exit(0);
}

// 공백을 다 넘기는 구조는 빠를지 몰라도, 구조상 보기 안 좋다.

static t_parse	check_end_of_string(char *str, int i, t_parse flag,\
									char **pend)
{
	t_parse	ret;
	int		next;

	ret = flag;
	next = ++i; 
	if (str[next] == ' ' || str[next] == '\0')
	{
		ret = P_END_OF_STR;
		*pend = &str[next];
	}
	return (ret);
}

void	check_exeception(int argc, char **argv)
{
	int		i;
	int		ret_atoi;
	char	*start;
	char	*end;
	t_parse	flag;

	check_argc(argc);
	//init_util
	i = 0;
	flag = P_END_OF_STR;
	++argv;
	start = NULL;
	end = NULL;
	while (*argv)
	{
		while ((*argv)[i]) // NUL 이 안 들어옴. 앞 문자가 NUL 인지 공백인지 확인해야 함.
		{
			flag = check_end_of_string(*argv, i, flag, &end);

			// psudo code
			// 공백 체크
			if (다음 문자가 NUL 또는 공백)
				flag = P_END_OF_STR
				end = *argv[i]
			// parse
			if (flag == P_END_OF_STR && start != NULL \
				&& ft_isdigit((*argv)[i - 1]))
				ft_strlcpy(str_atoi, &(*argv)[i], end - start); // 새로운 문자열 만들어야 함, nkim 님은 realloc 이라 표현 하더라
				ret_atoi = ft_atoi();

			if 부호
				if 다음 문자 숫자 아님?
					exit
				start = 현재 문자 주소
			start 와 end 에 문자열 주소 담기(end 에는 NUL 또는 끝 문자의 주소를 담아야 한다)
			
			if 숫자
				if flag != P_END_OF_STR
					start = 현재 문자 주소
				flag
			i++

				
			if ((*argv)[i] == '+' || (*argv)[i] == '-')
			{
				if (!ft_isdigit((*argv)[i + 1]))
					check_error(E_IS_NOT_NUM, 0);
				start = &(*argv)[i];
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
