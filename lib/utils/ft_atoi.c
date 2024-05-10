/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:46:31 by claferna          #+#    #+#             */
/*   Updated: 2024/05/08 19:29:19 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
**
** DESCRIPTION: Converts the initial portion of the string pointed to by
** str to int representation
*/

#include "libft.h"

int	ft_atoi(const char *str, int *num)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		str++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10))
			return (1);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	*num = result * sign;
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("  \n+123asd"));

}*/
