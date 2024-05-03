/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 19:01:06 by claferna          #+#    #+#             */
/*   Updated: 2024/05/03 20:51:45 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stdio.h>

/*
** DESC: The 'ra' function of the stack 'a becomes the last.
*/
void	ra(t_list **stack_a, int is_print)
{
	if (ft_lstsize(*stack_a) < 2)
		return ;
	t_list *last = *stack_a;
	t_list *second = (*stack_a)->next;
	last = ft_lstlast(last);
	last->next = *stack_a;
	*stack_a = second;
	last->next->next = NULL;
	if (is_print == 1)
		ft_printf("ra\n");
}

/*
** DESC: The 'rb' function of the stack 'b' becomes the last.
*/
void	rb(t_list **stack_b, int is_print)
{
	t_list *last;
        t_list *second;

         if (ft_lstsize(*stack_b) < 2)
                return ;
        last = *stack_b;
        second = (*stack_b)->next; 
        last = ft_lstlast(last);
        last->next = *stack_b;
        *stack_b = second;
        last->next->next = NULL;
	if (is_print == 1)
		ft_printf("rb\n");

}

/*
** DESC: The 'rr' function executes 'rb' and 'ra' at the same time.
*/
void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 0);
	rb(stack_b, 0);
	ft_printf("rr\n");
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
    t_list *stack_b2 = malloc(sizeof(t_list));
    stack_b2-> content = malloc(sizeof(int));
    *(int*) stack_b2-> content = 3;
    stack_b1->next = stack_b2;

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

    rr(&stack_a, &stack_b);

    printf("Pila A después de pa: ");
    printList(stack_a);
    printf("Pila B después de pa: ");
    printList(stack_b);
}*/

