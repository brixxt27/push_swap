/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:12:38 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 23:05:55 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "error.h"

void	check_error(t_error e, long long data)
{
	if ((e == E_SYS_CALL && data == -1))
	{
		ft_putstr_fd("System call error!\n", 2);
		exit(1);
	}
	else if (e == E_MALLOC && data == 0)
	{
		ft_putstr_fd("Malloc error!\n", 2);
		exit(1);
	}
	else if (e == E_LIBFT && data == 0)
	{
		ft_putstr_fd("Libft error!\n", 2);
		exit(1);
	}
}

void	print_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
