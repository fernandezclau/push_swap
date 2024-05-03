
#include "../include/push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list	*stack_a;
	
	stack_a = NULL;
	if (argc <= 1)
		return (0);
	if (process_arguments(argc, argv, &stack_a) != 0)
		(ft_printf("Error\n"), exit(-1));
	if (is_sorted(&stack_a))
	{
		ft_lstclear(&stack_a, free);
		return (0);
	}	
	while (stack_a != NULL)
	{
		printf("%d", *(int *) stack_a->content);
		stack_a = stack_a->next;
	}
}
