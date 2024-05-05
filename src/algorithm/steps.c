/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:53:05 by claferna          #+#    #+#             */
/*   Updated: 2024/05/05 19:31:22 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

/*
** DESC: The 'steps_to_a' funtion counts the nº of steps needed
** to move each element to the head of the list.
*/
void	steps_to_a(t_list **stack_a)
{
	int		len;
	int		lst_size;
	t_list	*cur;

	lst_size = ft_lstsize(*stack_a);
	cur = *stack_a;
	while (cur != NULL)
	{
		if (len < (lst_size / 2))
			cur->steps_a = len;
		else
			cur->steps_a = len - lst_size;
		cur = cur->next;
		len++;
	}
}

/*
** DESC: The 'get_nearby_num' function gets the highest closest number from
** 'stack_b' given a number of 'stack_a'.
*/
int	get_nearby_num(t_list **a, t_list **b, int lst_i)
{
	t_list	*cur_b;
	int		target;
	int		value;

	cur_b = *b;
	if (*(int *)(*a)->content < ft_lstmin(b) || *(int *)(*a)->content > ft_lstmax(b))
		return (ft_lstmax(b));
	else
	{
		value = ft_lstvalue(b, (lst_i - 1));
		while (cur_b->next != NULL)
		{
			if (*(int *)(*a)->content < *(int *)cur_b->content \
					&& *(int *)(*a)->content > *(int *)cur_b->next->content)
				target = *(int *)cur_b->next->content;
			else if (*(int *)(*a)->content < value && *(int *)(*a)->content > \
						*(int *)(*b)->content)
				target = *(int *)(*b)->content;
			cur_b = cur_b->next;
		}
	}
	return (target);
}
 
/*
** DESC: The 'steps_to_b' function counts the nº of steps needed
** to move each element of 'stack_b' to 'stack_a'.
*/
void	steps_to_b(t_list **a, t_list **b)
{
	int	target;
	int	lst_size;

	lst_size = ft_lstsize(*b);
	while (*a != NULL)
	{
		target = get_nearby_num(a, b, lst_size);
		if (ft_lstindex(b, target) <= lst_size / 2)
			(*a)->steps_b = ft_lstindex(b, target);
		else
			(*a)->steps_b = -(lst_size - ft_lstindex(b, target));
		*a = (*a)->next;
	}
}
#include <stdio.h>
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
	
	int num_a = 6;
	t_list *node_a = malloc(sizeof(t_list));
	node_a->content = &num_a;
	node_a->next = NULL;

    t_list *head = node1;
	t_list *a = node_a;
	
    printf("%d", get_nearby_num(&a, &head, 4));
	free(node1);
    free(node2);
    free(node3);

    return 0;
}
