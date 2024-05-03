/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:27:47 by claferna          #+#    #+#             */
/*   Updated: 2024/05/03 19:00:36 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

void	sa(t_list **stack_a, int print)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	first->next = second->next;
	second->next = first;
	*stack_a = second;
	if (print == 1)
		ft_printf("sa\n");
}

void	sb(t_list **stack_b, int print)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	first->next = second->next;
	second->next = first;
	*stack_b = second;
	if (print == 1)
		ft_printf("sb\n");    
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	ft_printf("ss\n");
}
/*
void printList(t_list *list) {
    while (list != NULL) {
        printf("%d ", *(int *)list->content);
        list = list->next;
    }
    printf("\n");
}

int main() {
    t_list *stack_b = malloc(sizeof(t_list));
    stack_b->content = malloc(sizeof(int));
    *(int *)stack_b->content = 42; // Valor del elemento
    t_list *stack_b1 = malloc(sizeof(t_list));
	stack_b1-> content = malloc(sizeof(int));
	*(int*) stack_b1-> content = 13;
	stack_b->next = stack_b1;

    t_list *stack_a = malloc(sizeof(t_list));
    stack_a->content = malloc(sizeof(int));
    *(int *)stack_a->content = 10; // Valor del elemento
    stack_a->next = NULL;
    t_list *stack_a1 = malloc(sizeof(t_list));
    stack_a1->content = malloc(sizeof(int));
    *(int*) stack_a1->content = 12;
    stack_a->next = stack_a1;

    printf("Pila A antes de pa: ");
    printList(stack_a);
    printf("Pila B antes de pa: ");
    printList(stack_b);

    ss(&stack_a, &stack_b);

    printf("Pila A después de pa: ");
    printList(stack_a);
    printf("Pila B después de pa: ");
    printList(stack_b);
}
*/
