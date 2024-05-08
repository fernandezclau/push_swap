/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:12:15 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 17:34:41 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1)
		return (0);
	if (process_arguments(argc, argv, &stack_a) != 0)
		(ft_printf("Error\n"), exit(-1));
	if (is_sorted(&stack_a))
		return (0);
	if (ft_lstsize(stack_a) < 6)
		short_sort(&stack_a);
	else
	{	
		big_sort(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
	}
}
