/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/16 19:13:29 by jayoon           ###   ########.fr       */
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

typedef struct s_stack
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

void	init_stack(t_stack *ps);

#endif
