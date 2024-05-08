/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:13:27 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 17:51:50 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'tiny_sort' function sorts a stack of three numbers.
*/
void	tiny_sort(t_list **stack)
{
	int		max;
	t_list	*cur;

	max = ft_lstmax(stack);
	cur = *stack;
	if (cur->content == max)
		ra(stack, 1);
	else if (cur->next->content == max)
		rra(stack, 1);
	if ((*stack)->content > (*stack)->next->content)
		sa(stack, 1);
}

/*
** DESC: The 'short_sort' function sorts a stack of five numbers or 
** less.
*/
void	short_sort(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			sa(stack_a, 1);
		return ;
	}
	if (ft_lstsize(*stack_a) == 3)
	{
		tiny_sort(stack_a);
		print_stack(stack_a);
		return ;
	}
	while (ft_lstsize(*stack_a) > 3)
		pb(&stack_b, stack_a);
	tiny_sort(stack_a);
	order_stacks(stack_a, &stack_b);
	merge(stack_a, &stack_b);
}
