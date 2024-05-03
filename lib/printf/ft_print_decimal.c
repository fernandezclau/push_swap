/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:56 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 13:50:20 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Functions to print decimals
*/

void	ft_putnbr(int nb, int *bytes)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", bytes);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', bytes);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, bytes);
		ft_putchar(nb % 10 + '0', bytes);
	}
	else
		ft_putchar(nb + '0', bytes);
}

void	ft_print_decimal(va_list arg, int *bytes)
{
	int	decimal;

	decimal = va_arg(arg, int);
	ft_putnbr(decimal, bytes);
}
