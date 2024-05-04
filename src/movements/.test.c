
#include <stdio.h>
#include "../../include/push_swap.h"

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
t_list *stack_a2 = malloc(sizeof(t_list));
     stack_a2->content = malloc(sizeof(int));
      *(int*) stack_a2->content = 30;
      stack_a1->next = stack_a2;

    printf("Pila A antes de pa: ");
    printList(stack_a);
    printf("Pila B antes de pa: ");
    printList(stack_b);

    pb(&stack_b, &stack_a);

    printf("Pila A después de pa: ");
    printList(stack_a);
    printf("Pila B después de pa: ");
    printList(stack_b);
}

