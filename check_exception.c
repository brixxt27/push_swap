/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:52:25 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/12 21:59:20 by jayoon           ###   ########.fr       */
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

static int	ft_issign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
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
		while ((*argv)[i]) // NUL 이 안 들어옴. 앞 문자가 NUL 인지 공백인지 확인해야 함.
		{
			if (ft_isdigit((*argv)[i]))
			{
				if (flag == P_END_OF_STR)
					start = &(*argv)[i];
				else if ((*argv)[i] == ' ' || (*argv)[i] == '\0')
					end = &(*argv)[i];
			}
			else if (ft_issign((*argv([i]))) && ft_isdigit((*argv)[i + 1]))
				start = &(*argv)[i];
			// flag = check_end_of_string(*argv, i, flag, &end);

			// psudo code
/*
			// 공백 체크, flag 바꿔주고, end 에 NUL 또는 공백 
			if (다음 문자가 NUL 또는 공백)
				flag = P_END_OF_STR
				end = *argv[i]

			// parse
			if (flag == P_END_OF_STR && i > 0 && ft_isdigit((*argv)[i - 1]))
			// 새로운 문자열 만들어야 함, nkim 님은 realloc 이라 표현 하더라
			// nheo 님 덕분에 substr 이라는 친구 찾음 ㅎㅎ
				ret_substr = ft_substr(str_atoi, &(*argv)[i], end - start); 
				ret_atoi = ft_atoi();

			// 부호 체크
			if 부호
				if 다음 문자 숫자 아님?
					exit
				start = 현재 문자 주소
			start 와 end 에 문자열 주소 담기(end 에는 NUL 또는 끝 문자의 주소를 담아야 한다)

			// 숫자인지 체크
			if 숫자
				if flag == P_END_OF_STR
					start = 현재 문자 주소
					flag = P_STR
			i++
*/
				
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
