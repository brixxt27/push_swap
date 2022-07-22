/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/22 22:01:06 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_linked_list
{
	int						data;
	size_t					index;
	struct s_linked_list	*next;
	struct s_linked_list	*prev;
}	t_node;

typedef struct s_stack_using_deque
{
	size_t	size;
	size_t	total;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

typedef enum e_print
{
	YES,
	NO
}	t_print;


t_stack	*init_stack(void);
void	list_next(t_stack *ps, int data);
void	push(t_stack *ps, t_node *node);
t_node	*pop(t_stack *ps);
void	free_stack(t_stack *a);
void	less_than_five(t_stack *a, t_stack *b);

// swap.c
void	sa(t_stack *a, t_print print);
void	sb(t_stack *b, t_print print);
void	ss(t_stack *a, t_stack *b);

// push.c
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);


#endif
