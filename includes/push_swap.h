/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/05 16:18:00 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_list	*prev;
	struct s_list	*next;
}	t_node;

typedef struct s_stack_using_linked_list
{
	int		num_node;
	t_node	*head;
	t_node	*tail;
}	t_stack;

typedef enum e_error
{
	E_IS_NOT_NUM,
	E_SIGN
}	t_error;

typedef enum e_parse
{
	P_NUM,
	P_SIGN
}	t_parse;

enum e_bool
{
	FALSE,
	TRUE
};

// check_exeception.c
void	check_exeception(int argc, char **argv);

// check_error.c
void	check_error(t_error e, long long data);

#endif
