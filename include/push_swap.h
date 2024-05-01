#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// -------- LIBS ---------
#include <limits.h>
// ------- MY LIBS -------
# include "../lib/libft/libft.h"

// ------- PROCESS ARGUMENTS -----
int	process_arguments(int argc, char **argv, t_list **list);
int	check_ints(char *str);
int	atoi_argument(char *argument, t_list **list);
int	check_duplicated_range(t_list *list);
#endif
