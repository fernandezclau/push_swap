/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:01:06 by claferna          #+#    #+#             */
/*   Updated: 2024/05/04 20:41:01 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'ra' function of the stack 'a becomes the last.
*/
void	ra(t_list **stack_a, int is_print)
{
	t_list	*last;
	t_list	*second;

	if (ft_lstsize(*stack_a) < 2)
		return ;
	last = *stack_a;
	second = (*stack_a)->next;
	last = ft_lstlast(last);
	last->next = *stack_a;
	*stack_a = second;
	last->next->next = NULL;
	if (is_print == 1)
		ft_printf("ra\n");
}

/*
** DESC: The 'rb' function of the stack 'b' becomes the last.
*/
void	rb(t_list **stack_b, int is_print)
{
	t_list	*last;
	t_list	*second;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	last = *stack_b;
	second = (*stack_b)->next;
	last = ft_lstlast(last);
	last->next = *stack_b;
	*stack_b = second;
	last->next->next = NULL;
	if (is_print == 1)
		ft_printf("rb\n");
}

/*
** DESC: The 'rr' function executes 'rb' and 'ra' at the same time.
*/
void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_printf("rr\n");
}
