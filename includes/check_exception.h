/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:43:52 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/08 17:38:56 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPT_H
# define EXCEPT_H

typedef enum e_parse
{
	P_STR,
	P_END_OF_STR
}	t_parse;

typedef struct s_end_of_string
{
	char	*start;
	char	*end;
}	t_eos;

void	check_exception(int argc, char **argv);

#endif
