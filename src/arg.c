#include "../include/push_swap.h"
#include <stdio.h>

/*
** DESC: The 'check_duplicate_range' functin checks wheter there are duplicate
** numbers and the numbers are in range of an int.
*/
int check_duplicate_range(t_list *list, void *content)
{
	int	num;

	num = *(int *)content;
	if (num < INT_MIN || num > INT_MAX)
		return (1);
	while (list)
	{
		if (*(int *)list->content == *(int *)content)
			return (1);
		list = list->next;
	}
	return (0);
}

/*
** DESC: The 'check_ints' function check wheter the argument is an int.
*/
int	check_ints(char *arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (!(arg[i] >= '0' && arg[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

void ft_free_split(char **split)
{
    if (!split)
        return;

    int i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
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
			return (-1);
		*num_ptr = ft_atoi(argument);
		num = ft_lstnew(num_ptr);
		if (!num)
		{
			free(num_ptr);
			return (-1);
		}
		ft_lstadd_back(list, num);
	}
	else
		return (-1);
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
	int	count_arg;
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
					ft_free_split(arg);
					return (1);
				}
			}
			ft_free_split(arg);
		}
	}
	return (0);
}

int	process_arguments(int argc, char **argv, t_list **list)
{
	if (split_arguments(argc, argv, list) != 0)
		return (1);
/*	t_list *aux;
	while (list != NULL)
	{
		printf("%d\n", *(int *) list->content);
                aux= list->next;
                if(check_duplicate_range(aux, list->content) != 0)
                        return (-1);
                }
                list = list->next;
	}*/
}

int main (int argc, char **argv)
{
	t_list *list = NULL;
	if (process_arguments(argc, argv, &list) != 0)
		printf("Error\n");

        t_list  *aux;
        while (list != NULL)
        {
                printf("%d\n", *(int *) list->content);
                aux= list->next;
                if(check_duplicate_range(aux, list->content) != 0)
                        return (-1);
                list = list->next;
        }
}
