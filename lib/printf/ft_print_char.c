/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:00:33 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 13:49:27 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Functions to print chars
*/

void	ft_putchar(char c, int *bytes)
{
	write(1, &c, 1);
	(*bytes)++;
}

void	ft_print_char(va_list arg, int *bytes)
{
	char	c;

	c = va_arg(arg, int);
	ft_putchar(c, bytes);
}
