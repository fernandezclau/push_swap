
#include "../include/push_swap.h"
#include <stdio.h>
/*
void insertionSort(t_list *head, t_list **so)
{
	t_list	*cur;
	t_list	*next;
	t_list	*t;
	*so = NULL;

	cur = head;
    	while (cur != NULL)
	{
		next = cur->next;
		if (!(*so) || *(int *)cur->content <= *(int *)(*so)->content)
		{
			cur->next = *so;
			*so = cur;
		}
		else
		{
			t = *so;
			while (t->next != NULL && *(int *)t->next->content \
					< *(int *)cur->content)
				t = t->next;
			cur->next = t->next;
			t->next = cur;
        	}
		cur = next;
	}
}
*/
/*
** DESC: The 'is_sorted' function check if a list is sorted
*/
int	is_sorted(t_list **list)
{
	
	while (*list && (*list)->next)
	{
		if ((*list)->content > (*list)->next->content)
			return (0);
		(*list) = (*list)->next;
	}
	return (1);
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
    // Ejemplo de uso
    t_list *list = malloc(sizeof(t_list));
    list->content = malloc(sizeof(int));
    *(int *)list->content = 3;
    list->next = malloc(sizeof(t_list));
    list->next->content = malloc(sizeof(int));
    *(int *)list->next->content = 1;
    list->next->next = malloc(sizeof(t_list));
    list->next->next->content = malloc(sizeof(int));
    *(int *)list->next->next->content = 5;
    list->next->next->next = NULL;


    printf("Lista original: ");
    printList(list);

    //t_list *sorted = NULL;
    //insertionSort(list, &sorted); // Ordenar la lista

    //printf("Lista ordenada: ");
    //printList(list);

    int num = is_sorted(&list);
    printf("Ordenada: %d", num);

    return 0;
}*/
