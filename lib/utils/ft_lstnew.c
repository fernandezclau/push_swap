/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:03:25 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 18:32:52 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Creates a new node using malloc. The member variable 'content'
** is initialized with the content of the 'content' parameter. The variable
** 'next' with NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
/*
int main() {
    int *data = (int *)malloc(sizeof(int));
	*data = 42;
	t_list *newNode = ft_lstnew((void *)data); 
    free(newNode);

    return 0;
}*/
