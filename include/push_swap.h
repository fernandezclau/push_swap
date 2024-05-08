/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:53:08 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 18:22:10 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include "../lib/libft/libft.h"
# include "../lib/printf/ft_printf.h"

// ------------- PROCESS ARGUMENTS -------------
int		process_arguments(int argc, char **argv, t_list **list);
int		check_ints(char *str);
int		atoi_argument(char *argument, t_list **list);
int		check_duplicated_range(t_list *list);
int		process_arguments(int argc, char **argv, t_list **list);
// ------------------- UTILS -------------------
void	free_split(char **split);
void	print_stack(t_list **stack);
int		is_sorted(t_list **list);
void	free_lst(t_list **stack);
// -------------- MOVES ------------------------
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
void	sa(t_list **stack_a, int print);
void	sb(t_list **stack_b, int print);
void	ss(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int print);
void	rb(t_list **stack_b, int print);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a, int print);
void	rrb(t_list **stack_b, int print);
void	rrr(t_list **stack_a, t_list **stack_b);
// ---------------- LIST UTILS -----------------
int		ft_lstmin(t_list **list);
int		ft_lstmax(t_list **list);
int		ft_lstindex(t_list **list, int value);
t_list	*ft_lstvalue(t_list **list, int index);
int		ft_lstmax_i(t_list **stack);
// -------------- ALGORITHM -------------------
// ................ steps .....................
void	steps_to_a(t_list **stack_a);
void	steps_to_b(t_list **stack_b, t_list **stack_a);
int		get_nearby_num(t_list **a, t_list **b, int index);
int		least_steps(t_list **a);
void	total_steps(t_list **a);
//................. sorting ...................
void	big_sort(t_list **stack_a, t_list **stack_b);
void	short_sort(t_list **stack_a);
void	tiny_sort(t_list **stack);
void	merge(t_list **stack_a, t_list **stack_b);
void	order_stacks(t_list **stack_a, t_list **stack_b);
#endif
