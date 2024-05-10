/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:58:30 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 20:12:56 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** 
** DESCRIPTION: Generates a string that represents the ineger value received
** as an argument. Negative numbers have to be managed.
*/

#include "libft.h"

static int	ft_get_size(int n)
{
	if (n > 0)
		return (0);
	return (1);
}

static int	ft_get_absolute(int n)
{
	if (n > 0)
		return (n);
	return (-n);
}

static char	*ft_get_special_values(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == 0)
		return (ft_strdup("0"));
	return (0);
}

static int	ft_get_len(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	int		aux_n;
	char	*str_n;

	size = ft_get_size(n);
	aux_n = ft_get_absolute(n);
	if (n == -2147483648 || n == 2147483647 || n == 0)
		return (ft_get_special_values(n));
	size += ft_get_len(n);
	str_n = (char *)malloc(size + 1);
	if (!str_n)
		return (0);
	*(str_n + size--) = '\0';
	while (aux_n > 0)
	{
		*(str_n + size--) = aux_n % 10 + '0';
		aux_n /= 10;
	}
	if (size == 0 && str_n[1] == '\0')
		*(str_n + size) = '0';
	else if (size == 0 && str_n[1] != '\0')
		*(str_n + size) = '-';
	return (str_n);
}
/*
#include <stdio.h>

int main() {
	int num = -12345;
	   char *str = ft_itoa(num);
	    if (str) {
	        printf("Número como cadena: %s\n", str);
	        free(str); // Liberamos la memoria asignada
	    } else {
	        printf("Error al convertir el número en cadena\n");
	    }
	    return 0;
}*/
