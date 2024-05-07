/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:38:15 by claferna          #+#    #+#             */
/*   Updated: 2024/05/07 20:12:50 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** The 'move_stack' function
*/
void	move_stack(t_list **stack_a, t_list **stack_b, int index)
{
	int		i;

	i = 0;
	while (abs(ft_lstvalue(stack_a, index)->steps_a) > i)
	{
		if (ft_lstvalue(stack_a, index)->steps_a > 0)
			ra(stack_a, 0);
		else
			rra(stack_a, 1);
		index = least_steps(stack_a);
		i++;
	}
	i = 0;
	while (abs(ft_lstvalue(stack_a, index)->steps_b) > i)
	{
		if (ft_lstvalue(stack_a, index)->steps_b > 0)
			rb(stack_b, 0);
		else
			rrb(stack_b, 1);
		i++;
	}
}

/*
** DESC: The 'exec_steps' function
*/
void	exec_steps(t_list **stack_a, t_list **stack_b, int index)
{
	t_list	*aux;

	aux = ft_lstvalue(stack_a, index);
	if (aux->steps_a * aux->steps_b > 0)
	{
		while (aux->steps_a != 0 && aux->steps_b != 0)
		{
			if (aux->steps_a > 0)
			{
				rr(stack_a, stack_b);
				aux->steps_a--;
				aux->steps_b--;
			}
			else
			{
				rrr(stack_a, stack_b);
				aux->steps_a++;
				aux->steps_b++;
			}
		}
		total_steps(stack_a);
		index = least_steps(stack_a);
	}
	move_stack(stack_a, stack_b, index);
}

/*
** DESC: The 'order_stacks' function
*/
void	order_stacks(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_b)->content != ft_lstmax(stack_b))
	{
		if (ft_lstmax(stack_b) <= (ft_lstsize(*stack_b) / 2))
			rb(stack_a, 0);
		else
			rrb(stack_a, 1);
	}
	tiny_sort(stack_a);
}

/*
** DESC: The 'merge' function merges the content of the two stacks, resulting
** in a ordered stack.
*/
void	merge(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux_a;
	int		size;
	int		i;
	
	i = 3;
	size = ft_lstsize(*stack_a);
	aux_a = ft_lstvalue(stack_a, size - (i--));
	while (ft_lstsize(*stack_a))
	{
		if (ft_lstmax(&aux_a) < ft_lstmax(stack_b))
			pa(stack_a, stack_b);
		else
		{
			rra(stack_a, 0);
			aux_a = ft_lstvalue(stack_a, size - (i--));
		}
	}
	while (ft_lstsize(*stack_b) >= 0)
		pa(stack_a, stack_b);
}

/*
** The 'big_sort' function is the main function to sort a stack of more
** than 6 numbers with two stacks.
*/
void	big_sort(t_list **stack_a, t_list **stack_b)
{
	int	index;

	pb(stack_b, stack_a);
	pb(stack_b, stack_a);
	while (ft_lstsize(*stack_a) > 3)
	{
		steps_to_a(stack_a);
		steps_to_b(stack_a, stack_b);
		total_steps(stack_a);
		index = least_steps(stack_a);
		exec_steps(stack_a, stack_b, index);
		pb(stack_b, stack_a);
		print_stack(stack_a);
		printf("Stack b \n");
		print_stack(stack_b);
	}
	order_stacks(stack_a, stack_b);
	merge(stack_a, stack_b);
	printf("FIN\n");
	print_stack(stack_a);
	printf("\n");
	print_stack(stack_b);
}
