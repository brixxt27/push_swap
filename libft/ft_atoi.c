/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:51:39 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/12 21:35:32 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*pass_space(const char *str)
{
	while (ft_isspace(*str))
		str++;
	return (str);
}

static const char	*check_sign(const char *str, int *psign)
{
	*psign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*psign = -1;
		str++;
	}
	return (str);
}

static void	make_atoi(const char *str, int *pres)
{
	while (ft_isdigit(*str))
	{
		*pres = 10 * *pres + *str - '0';
		str++;
	}
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		res;

	str = pass_space(str);
	str = check_sign(str, &sign);
	make_atoi(str, &res);
	return (sign * res);
}
