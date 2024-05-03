
#include "../include/push_swap.h"

/*
** DESC: The 'free_split' function free the memory of a **char
*/
void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}
