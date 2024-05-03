#include "../include/push_swap.h"
#include <stdio.h>

/*
** DESC: The 'check_duplicate_range' functin checks wheter there are duplicate
** numbers and the numbers are in range of an int.
*/
int check_duplicated_range(t_list *list)
{
	int	num;
	t_list *temp;
	
	while (list)
	{
		num = *(int *)list->content;
		if (num < INT_MIN || num > INT_MAX)
			return 1;
        	temp = list->next;
		while (temp)
		{
			if (*(int *)temp->content == num)
                		return 1;
            		temp = temp->next;
		}
        	list = list->next;
	}
	return 0;
}

/*
** DESC: The 'check_ints' function check wheter the argument is an int.
*/
int	check_ints(char *arg)
{
	int i;

	i = 0;
	if (arg[i] == '-' || arg[i] == '+')
		i++;
	while (arg[i] != '\0')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

/*
** DESC: The 'atoi_argument' function converts an argument to int and checks
** wether it is a valid int.
*/
int	atoi_argument(char *argument, t_list **list)
{
	int	*num_ptr;
	t_list	*num;
	if (check_ints(argument) == 0)
	{
		num_ptr = malloc(sizeof(int));
		if (!num_ptr)
			return (1);
		*num_ptr = ft_atoi(argument);
		num = ft_lstnew(num_ptr);
		if (!num)
		{
			free(num_ptr);
			return (1);
		}
		ft_lstadd_back(list, num);
	}
	else
		return (1);
	return (0);
}

/*
** DESC: The 'split_arguments' function splits all the arguments and converts
** them to int values
*/
int	split_arguments(int argc, char **argv, t_list **list)
{
	int	i;
	int	j;
	char	**arg;
	 
	i = 1;
	while (i < argc)
	{
        	arg = ft_split(argv[i++], ' ');
        	if (arg)
        	{
            		j = 0;
            		while (arg[j])
            		{
				if (atoi_argument(arg[j++], list) != 0)
				{
					free_split(arg);
					return (1);
				}
			}
			free_split(arg);
		}
	}
	return (0);
}
/*
** DESC: The 'process_argument' function process and validates all arguments
*/
int	process_arguments(int argc, char **argv, t_list **list)
{
	if (split_arguments(argc, argv, list) != 0)
		return (1);
	if (check_duplicated_range(*list) != 0)
	{
		ft_lstclear(list, free);
		return (1);
	}
	return (0);
}
/*
int main (int argc, char **argv)
{
	t_list *list = NULL;
	if (process_arguments(argc, argv, &list) != 0)
		printf("Error\n");
}
*/
