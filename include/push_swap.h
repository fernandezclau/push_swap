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
#endif
