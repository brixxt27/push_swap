/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:12:38 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/02 18:02:11 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	check_error(t_error e, long long data)
{
	if (e == E_IS_NUM && data == 0)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}
