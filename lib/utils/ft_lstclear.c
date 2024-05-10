/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:40:49 by claferna          #+#    #+#             */
/*   Updated: 2024/05/06 16:34:59 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Deletes and releases the given node 'lst' and all consecutive
** of that node, using the function 'del' and free. In the end, the pointer
** to the list must be NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*aux;

	while (*lst)
	{
		aux = (*lst)->next;
		free(*lst);
		*lst = aux;
	}
	*lst = 0;
}
