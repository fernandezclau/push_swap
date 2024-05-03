
#include "../../include/push_swap.h"

void	sa(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;

	if (ft_lstsize(*stack_a <= 1)
			return ;
	aux = *stack_a;
	*stack_a = (*stack_a)->next;
	aux->next == (*stack_a)->next;
	(*stack_a)->next = aux;
	ft_printf("sa\n");
}

void	sb(t_list **stack_b, t_list **stack_a)
{
	t_list	*aux;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	
}
