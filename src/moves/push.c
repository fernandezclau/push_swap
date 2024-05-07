/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:42:49 by claferna          #+#    #+#             */
/*   Updated: 2024/05/07 20:01:11 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'pa' function takes the first element on 'b' and puts it
** on the first element on 'a'.
*/
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	aux = NULL;
	if (ft_lstsize(*stack_b) == 0)
		return ;
	aux = *stack_b;
	*stack_b = (*stack_b)->next;
	aux->next = *stack_a;
	*stack_a = aux;
	ft_printf("pa\n");
}

/*
** DESC: The 'pb' function takes the first element on 'a' and puts it
** on the first element on 'b'.
*/
void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*aux;

	aux = NULL;
	if (ft_lstsize(*stack_a) == 0)
		return ;
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next = *stack_b;
	*stack_b = aux;
	ft_printf("pb\n");
}
