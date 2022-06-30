/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 22:11:19 by jayoon            #+#    #+#             */
/*   Updated: 2022/06/30 21:12:15 by jayoon           ###   ########.fr       */
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

typedef struct s_linked_list
{
	int		num_node;
	t_node	*head;
	t_node	*tail;
}	t_list;

typedef enum e_error
{
	E_ARGV
}	t_error;

#endif