/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 19:47:02 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_linked_list
{
	int						index;
	int						data;
	struct s_linked_list	*next;
	struct s_linked_list	*prev;
}	t_node;

typedef struct s_stack_using_deque
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;


t_stack	*init_stack(void);
void	list_next(t_stack *ps, int data);
void	push(t_stack *ps, t_node *node);
t_node	*pop(t_stack *ps);
void	less_than_five(t_stack *a, t_stack *b);

// free_stack.c
void	free_stack(t_stack *a);

#endif
