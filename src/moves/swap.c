/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:47 by claferna          #+#    #+#             */
/*   Updated: 2024/05/04 20:44:34 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'sa' function swaps the first two elements of 'a'.
*/
void	sa(t_list **stack_a, int print)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	if (print == 1)
		printf("sa\n");
}

/* 
** DESC: The 'sb' function swaps the first two elements of 'b'.
*/
void	sb(t_list **stack_b, int print)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	if (print == 1)
		printf("sb\n");
}

/*
** DESC: The 'ss' function executes 'sa' and 'sb' at the same time.
*/
void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	printf("ss\n");
}
