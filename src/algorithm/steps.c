/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:53:05 by claferna          #+#    #+#             */
/*   Updated: 2024/05/06 18:02:28 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>
#include <math.h>

/*
** DESC: The 'steps_to_a' funtion counts the nº of steps needed
** to move each element to the head of the list.
*/
void	steps_to_a(t_list **stack_a)
{
	int		len;
	int		lst_size;
	t_list	*cur;

	len = 0;
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
** DESC: The 'get_nearby_num' function gets the lowest closest number from
** 'stack_b' given a number of 'stack_a'.
*/
int	get_nearby_num(t_list **a, t_list **b, int lst_i)
{
	t_list	*cur_b;
	int		target;
	int		value;

	cur_b = *b;
	if ((*a)->content < ft_lstmin(b) || (*a)->content > ft_lstmax(b))
		return (ft_lstmax(b));
	else
	{
		value = ft_lstvalue(b, (lst_i - 1))->content;
		while (cur_b->next != NULL)
		{
			if ((*a)->content < cur_b->content \
					&& (*a)->content > cur_b->next->content)
				target = cur_b->next->content;
			else if ((*a)->content < cur_b->next->content \
						&& (*a)->content > (*b)->content)
				target = (*b)->content;
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
	int		target;
	int		lst_size;
	t_list	*aux;

	target = 0;
	lst_size = ft_lstsize(*b);
	aux = *a;
	while (aux != NULL)
	{
		target = get_nearby_num(&aux, b, lst_size);
		if (ft_lstindex(b, target) <= lst_size / 2)
			aux->steps_b = ft_lstindex(b, target);
		else
			aux->steps_b = -(lst_size - ft_lstindex(b, target));
		aux = aux->next;
	}
}

/*
** DESC: The 'least_steps' function chooses the element of the stack_a
** with the least amount of steps.
*/
int	least_steps(t_list **a)
{
	int	j;
	int	index;
	int	value;
	int	min;

	j = 0;
	min = INT_MAX;
	while (j < ft_lstsize(*a))
	{	
		value = ft_lstvalue(a, j)->total_s;
		if (value < min)
		{
			min = value;
			index = j;
		}
		j++;
	}
	return (index);
}

/*
** DESC: The 'total_steps' function counts the total steps of a element
** with absolute values.
*/
void	total_steps(t_list **a)
{
	t_list	*aux;

	aux = *a;
	while (aux != NULL)
	{
		if ((aux->steps_a * aux->steps_b) < 0)
			aux->total_s = (abs(aux->steps_a) + abs(aux->steps_b));
		else
		{
			if (abs(aux->steps_a) > abs(aux->steps_b))
				aux->total_s = abs(aux->steps_a);
			else
				aux->total_s = abs(aux->steps_b);
		}
		aux = aux->next;
	}
}
/*
int main() {
    // Crear y llenar la lista 'stack_b'
    t_list *stack_a = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    stack_a->content = 5;
    node2->content = 10;
    node3->content = 15;
    stack_a->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Crear y llenar la lista 'stack_a'
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = 7;
    node1->next = malloc(sizeof(t_list));
    node1->next->content = 12;
    node1->next->next = NULL;

    steps_to_a(&stack_a);
    steps_to_b(&stack_a, &node1);
	int min = least_steps(&stack_a);
	printf("Posición de pasos mínimos: %d", min);
	total_steps(&stack_a);

    // Imprimir los resultados
    printf("Pasos hacia b:\n");
    while (stack_a != NULL) {
		printf("Content: %d, Steps_a: %d\n", stack_a->content, stack_a->steps_a);
        printf("Content: %d, Steps_b: %d\n", stack_a->content, stack_a->steps_b);
		printf("Contetn: %d, Total: %d\n", stack_a->content, stack_a->total_s);
		stack_a = stack_a->next;
    }

    // Liberar la memoria asignada
    free(node1);
    free(node2);
    free(node3);
    free(stack_a);

    return 0;
}*/
