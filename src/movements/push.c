
#include "../../include/push_swap.h"
#include <stdio.h>
/*
** DESC: The 'pa' function takes the first element on 'b' and puts it
** on the first element on 'a'.
*/
void    pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	aux = NULL;
        if (ft_lstsize(*stack_b) == 0)
                return ;
        aux = *stack_b;
        *stack_b = (*stack_b)->next;
        aux->next = *stack_a;
        *stack_a = aux;
        printf("pa\n");
}

/*
** DESC: The 'pb' function takes the first element on 'a' and puts it
** on the first element on 'b'.
*/
void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*aux;

	aux = NULL;
	if (ft_lstsize(*stack_a) == 0)
		return ;
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next = *stack_a;
	*stack_a = aux;
	ft_printf("pb\n");
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
    stack_b->next = NULL;

    t_list *stack_a = malloc(sizeof(t_list));
    stack_a->content = malloc(sizeof(int));
    *(int *)stack_a->content = 10; // Valor del elemento
    stack_a->next = NULL;

    printf("Pila A antes de pa: ");
    printList(stack_a);
    printf("Pila B antes de pa: ");
    printList(stack_b);

    pa(&stack_a, &stack_b);

    printf("Pila A después de pa: ");
    printList(stack_a);
    printf("Pila B después de pa: ");
    printList(stack_b);
}*/
