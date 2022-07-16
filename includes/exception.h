/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exception.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:43:52 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/16 21:07:15 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_H
# define EXCEPTION_H

# include "push_swap.h"

typedef enum e_status_of_char
{
	P_NOT_END,
	P_END
}	t_stat;

typedef struct s_end_of_string
{
	char			*start;
	char			*end;
}	t_eos;

void	check_exception_and_parse(char **argv, t_stack *a);

#endif
