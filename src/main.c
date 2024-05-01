
#include "../include/push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char **arg;

	int i;
	int j;
	int count_arg = 0;
	i = 1;
	while (i < argc)
	{
		arg = ft_split(argv[i], ' ');

		if (arg)
		{
			j = 0;
			while (arg[j])
			{
				int num = ft_atoi(arg[j]);
				printf(" %d ", num);
				j++;
				count_arg++;
			}
		}
		i++;
	}
	printf("count: %d", count_arg);
}
