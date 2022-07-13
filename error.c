/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:12:38 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/13 20:20:21 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "error.h"

void	check_error(t_error e, long long data)
{
	if (e == E_SYS_CALL && data == -1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(255);
	}
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(255);
}
