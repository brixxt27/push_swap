/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:43:52 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/21 17:08:55 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

# include "push_swap.h"
# include <unistd.h>

typedef enum e_status_of_char
{
	P_NOT_END,
	P_END
}	t_stat;

typedef struct s_end_of_string
{
	char	*start;
	char	*end;
}	t_eos;

void	parse(char **argv, t_stack *a);
ssize_t	atol_and_check_int(char *str);
void	check_duplication_and_index(t_stack *a, int data);
void	check_order(t_stack *a);

#endif
