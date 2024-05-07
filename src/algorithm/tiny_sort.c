/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:13:27 by claferna          #+#    #+#             */
/*   Updated: 2024/05/07 19:56:08 by claferna         ###   ########.fr       */
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
