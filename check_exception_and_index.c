/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_exception_and_index.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:23:08 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/20 23:04:53 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "error.h"

static t_node	*init_node(int data)
{
	t_node	ret;

	ret = malloc(sizeof(t_node));
	check_error(E_MALLOC, (long long)ret);
}
void	check_exception_and_index(t_stack *a, int data)
{
	t_node	*head;
	t_node	*node;

	head = a->top;
	while (head)
	{
		if (head->data == data)
			print_error();
		if (head->data )
		head = head->next;
	}
	// 중복 검사
	// 이미 정렬 -> 정상 종료
	// index

}
