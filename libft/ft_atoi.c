/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 15:59:12 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/02 17:59:04 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static unsigned long long	cal(const char *str, int *psign, int *pi)
{
	unsigned long long	res;

	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*psign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + *str - '0';
		str++;
		(*pi)++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	res;

	i = 0;
	sign = 1;
	res = cal(str, &sign, &i);
	if (res > LLONG_MAX + 1ULL && sign == -1)
		return ((int)LONG_MIN);
	else if (res > LLONG_MAX && sign == 1)
		return ((int)LONG_MAX);
	if (i > 19)
	{
		if (sign == -1)
			return ((int)LONG_MIN);
		return ((int)LONG_MAX);
	}
	return ((int)res * sign);
}
