
#include "../include/push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1)
		return (0);
	if (process_arguments(argc, argv, &stack_a) != 0)
		(ft_printf("Error\n"), exit(-1));
	/*if (is_sorted(&stack_a))
	{
	//	ft_lstclear(&stack_a, free);
		return (0);
	}*/

	if (argc <= 6)
		tiny_sort(&stack_a);
	else
	{	
		big_sort(&stack_a, &stack_b);
		ft_lstclear(&stack_a);
	}
//	ft_lstclear(&stack_a, free);
}
