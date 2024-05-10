/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:24:21 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 18:29:01 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Adds a new node at the end of the list 'lst'
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
		(ft_lstlast(*lst))->next = new;
}
