/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:50:07 by claferna          #+#    #+#             */
/*   Updated: 2024/05/07 16:56:31 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
** DESC: The 'is_sorted' function check if a list is sorted
*/
int	is_sorted(t_list **list)
{
	t_list	*aux;

	aux = *list;
	while (aux && aux->next)
	{
		if (aux->content > aux->next->content)
			return (0);
		aux = aux->next;
	}
	return (1);
}

/*
** DESC: The 'print_stack' function prints a stack.
*/
void	print_stack(t_list **stack)
{
	t_list	*aux;

	aux = *stack;
	while (aux != NULL)
	{
		ft_printf(" %d ", aux->content);
		aux = aux->next;
	}
}

/*
** DESC: The 'free_split' function free the memory of a **char
*/
void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
