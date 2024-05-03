/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:19:08 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 16:31:07 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Partially reproduces the behavior of the printf function.
*/

void	ft_print_format(char type, va_list arg, int *bytes)
{
	if (type == 'c')
		ft_print_char(arg, bytes);
	else if (type == 's')
		ft_print_str(arg, bytes);
	else if (type == 'p')
		ft_print_vd(arg, bytes);
	else if (type == 'd' || type == 'i')
		ft_print_decimal(arg, bytes);
	else if (type == 'u')
		ft_print_udecimal(arg, bytes);
	else if (type == 'x')
		ft_print_hexa(arg, 1, bytes);
	else if (type == 'X')
		ft_print_hexa(arg, 0, bytes);
	else if (type == '%')
		ft_print_percentage(bytes);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		bytes;

	bytes = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			ft_print_format(*format, args, &bytes);
		}
		else
		{
			ft_putchar(*format, &bytes);
		}
		format++;
	}
	va_end(args);
	return (bytes);
}
