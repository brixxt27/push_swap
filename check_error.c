/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:12:38 by jayoon            #+#    #+#             */
/*   Updated: 2022/06/30 21:12:58 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_error(t_error e, long long data)
{
	if (e == E_ARGV && data == 0)
	{
		ft_putstr_fd("Argv is NULL!\n", 2);
		exit(1);
	}
}
