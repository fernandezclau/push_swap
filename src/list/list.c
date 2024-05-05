/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:02:52 by claferna          #+#    #+#             */
/*   Updated: 2024/05/05 19:29:56 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'ft_lstmin' function gets the minimum value of a list.
*/
int	ft_lstmin(t_list **list)
{
	int		min;
	t_list	*cur;	

	if (*list == NULL)
		return (-1);
	min = *(int *)(*list)->content;
	cur = (*list)->next;
	while (cur != NULL)
	{
		if (*(int *)cur->content < min)
			min = *(int *)cur->content;
		cur = cur->next;
	}
	return (min);
}

/*
** DESC: The 'ft_lstmax' function gests the maximum value of a list.
*/
int	ft_lstmax(t_list **list)
{
	int		max;
	t_list	*cur;

	if (*list == NULL)
		return (-1);
	max = *(int *)(*list)->content;
	cur = (*list)->next;
	while (cur != NULL)
	{
		if (*(int *)cur->content > max)
			max = *(int *)cur->content;
		cur = cur->next;
	}
	return (max);
}

/*
** DESC: The 'ft_lst_index' function gets the index of an element of a
** list given its value.
*/
int	ft_lstindex(t_list **list, int value)
{
	int		index;
	t_list	*cur;

	if (*list == NULL)
		return (-1);
	index = 0;
	cur = (*list);
	while (cur != NULL)
	{
		if (*(int *)cur->content == value)
			return (index);
		cur = cur->next;
		index++;
	}
	return (-1);
}

/*
** DESC: The 'ft_lst_value' function gets the value of an element of a
** list given its index.
*/
int	ft_lstvalue(t_list **list, int index)
{
	int		i;
	t_list	*cur;

	i = 0;
	cur = *list;
	while (cur != NULL)
	{
		if (i == index)
			return (*(int *)cur->content);
		cur = cur->next;
		i++;
	}
	return (-1);
}

/*
int main() {
    // Crear algunos nodos de lista
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));

    int num1 = 5, num2 = 2, num3 = 7, num4 = -10;

    node1->content = &num1;
    node1->next = node2;
    node2->content = &num2;
    node2->next = node3;
    node3->content = &num3;
    node3->next = node4;
    node4->content = &num4;

    t_list *head = node1; // Apunta al inicio de la lista
	
    // Llamar a la función ft_lstmin y mostrar el resultado
    printf("El elemento mínimo de la lista es: %d\n", ft_lstmin(&head));
    printf("El elemento máximo de la lista es: %d\n", ft_lstmax(&head));
   int value_to_find = 50;

    // Llamar a la función ft_lstfind para encontrar la posición del valor
    int position = ft_lst_index(&head, value_to_find);
    if (position != -1)
        printf("El valor %d esta en la posicion %d", value_to_find, position);
    else
        printf("El valor %d no se encuentra en la lista.\n", value_to_find);
    int index_to_get = 1;

    int value = ft_lst_value(&head, index_to_get);
    if (value != -1)
        printf("El valor en el índice %d de: %d\n", index_to_get, value);
    else
        printf("índice %d fuera de rango.\n", index_to_get);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/
