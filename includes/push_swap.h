/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/02 17:53:55 by jayoon           ###   ########.fr       */
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
	E_IS_NUM
}	t_error;

// check_exeception.c
void	check_exeception(int argc, char **argv);

// check_error.c
void	check_error(t_error e, long long data);

#endif
