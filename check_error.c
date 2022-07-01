/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:12:38 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/01 17:13:54 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_error(t_error e, long long data)
{
	if (e == E_ARGV_EMPTY && data == 0)
	{
		exit(1);
	}
	if (e == E_IS_NUM && data == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}
