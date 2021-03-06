/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:48:29 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 23:20:17 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

typedef enum e_error
{
	E_SYS_CALL,
	E_MALLOC,
	E_LIBFT
}	t_error;

void	check_error(t_error e, long long data);
void	print_error(void);

#endif
