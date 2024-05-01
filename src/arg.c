#include "../include/push_swap.h"
#include <stdio.h>

int	check_int(char *arg)
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

int	arg_to_int(char *str, t_list **list)
{
	int	*num_ptr;
	t_list	*num;

	if (check_int(str) == 0)
	{
		num_ptr = malloc(sizeof(int));
		if (!num_ptr)
			return (-1);
		*num_ptr = ft_atoi(str);
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
int	process_arg(int argc, char **argv, t_list **list)
{
	int i;
	int j;
	int count_arg;
	char **arg;
	t_list *num;
	 
	i = 1;
	while (i < argc)
	{
        	arg = ft_split(argv[i], ' ');
        	if (arg)
        	{
            		j = 0;
            		while (arg[j])
            		{
                		/*if (check_int(arg[j]) == 0)
                		{
                    			int *num_ptr = malloc(sizeof(int));
                    			if (!num_ptr)
                        			return (-1);
                    			*num_ptr = ft_atoi(arg[j]);
                    			num = ft_lstnew(num_ptr);
                    			if (!num)
                    			{
                        			free(num_ptr);
                        			return (-1);
                    			}
                    			ft_lstadd_back(list, num);
                    			j++;
                		}*/
				if (arg_to_int(arg[j], list) != 0)
				{
					ft_free_split(arg);
					return (-1);
				}
				j++;
			}
			ft_free_split(arg);
		}
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	t_list *list = NULL;
	if (process_arg(argc, argv, &list) != 0)
		printf("Error final\n");

	while (list != NULL)
	{
		printf("%d\n", *(int *) list->content);
		list = list->next;
	}
}
