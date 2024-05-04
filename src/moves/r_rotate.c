/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:51:53 by claferna          #+#    #+#             */
/*   Updated: 2024/05/04 20:43:12 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'rra' function moves the last element of 'a' to the firt position.
*/
void	rra(t_list **stack_a, int print)
{
	t_list	*cur;
	t_list	*prev;

	if (*stack_a == NULL || ft_lstsize(*stack_a) < 2)
		return ;
	cur = *stack_a;
	prev = NULL;
	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = NULL;
	cur->next = *stack_a;
	*stack_a = cur;
	if (print == 1)
		ft_printf("rra\n");
}

/* 
** DESC: The 'rrb' function moves the last element of 'b' to the first position.
*/
void	rrb(t_list **stack_b, int print)
{
	t_list	*cur;
	t_list	*prev;

	if (*stack_b == NULL || ft_lstsize(*stack_b) < 2)
		return ;
	cur = *stack_b;
	prev = NULL;
	while (cur->next != NULL)
	{
		prev = cur;
		cur = cur->next;
	}
	prev->next = NULL;
	cur->next = *stack_b;
	*stack_b = cur;
	if (print == 1)
		ft_printf("rrb\n");
}

/*
** DESC: The 'rrr' function executes 'rra' and 'rrb' at the same time.
*/
void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a, 0);
	rrb(stack_b, 0);
	ft_printf("rrr\n");
}
