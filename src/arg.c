/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:41:05 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 19:26:27 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

/*
** DESC: The 'check_duplicate_range' functin checks wheter there are duplicate
** numbers and the numbers are in range of an int.
*/
int	check_duplicated_range(t_list *list)
{
	int		num;
	t_list	*temp;

	while (list)
	{
		num = list->content;
		if (num < INT_MIN || num > INT_MAX)
			return (1);
		temp = list->next;
		while (temp)
		{
			if (temp->content == num)
				return (1);
			temp = temp->next;
		}
		list = list->next;
	}
	return (0);
}

/*
** DESC: The 'check_ints' function check wheter the argument is an int.
*/
int	check_ints(char *arg)
{
	int	i;

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
	int		num_ptr;
	t_list	*node;
	t_list	*num;

	if (check_ints(argument) == 0)
	{
		if (ft_atoi(argument, &num_ptr) == 1 && list != NULL \
				&& *list != NULL)
		{
			free_lst(list);
			return (1);
		}
		node = malloc(sizeof(t_list));
		if (!node)
			return (0);
		node->content = num_ptr;
		node->next = NULL;
		ft_lstadd_back(list, node);
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
	int		i;
	int		j;
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
		return (1);
	}
	return (0);
}
