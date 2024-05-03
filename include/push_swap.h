#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// -------- LIBS ---------
# include <limits.h>
# include <unistd.h>
// ------- MY LIBS -------
# include "../lib/libft/libft.h"
# include "../lib/printf/ft_printf.h"

// ------- PROCESS ARGUMENTS -----
int	process_arguments(int argc, char **argv, t_list **list);
int	check_ints(char *str);
int	atoi_argument(char *argument, t_list **list);
int	check_duplicated_range(t_list *list);
int	process_arguments(int argc, char **argv, t_list **list);
// ------------- UTILS -----------
void	free_split(char **split);
// --------- QUICK SORT ----------
int	is_sorted(t_list **list);
// ---------- MOVEMENTS ----------
// ........... push ..............
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
// ........... swap ..............
void	sa(t_list **stack_a, int print);
void	sb(t_list **stack_b, int print);
void	ss(t_list **stack_a, t_list **stack_b);
// ........... rotate ............
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list *stack_a, t_list *stack_b);
// ....... reverse rotate ........
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
#endif
