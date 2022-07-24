/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atol_and_check_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:04:22 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 21:24:37 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "error.h"

ssize_t	atol_and_check_int(char *str)
{
	ssize_t	ret_atol;

	ret_atol = ft_atol(str);
	if (!ft_isint(ret_atol))
		print_error();
	return (ret_atol);
}
