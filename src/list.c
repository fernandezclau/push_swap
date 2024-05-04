/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:02:52 by claferna          #+#    #+#             */
/*   Updated: 2024/05/04 21:11:28 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstmin(t_list **list)
{
	int	smallest;
	
	smallest = *list;
	while (list != NULL)
	{
		if (list->content < smallest->content)
			smallest = list;
		list = list->next;
	}
	return (*(int *) smallest->content);
}

int main(void)
{
	
}

