/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:46:38 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 12:16:59 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Funtions to print unsigned decimals.
*/

void	ft_putu_nbr(unsigned int u_nb, int *bytes)
{
	if (u_nb > 9)
	{
		ft_putu_nbr(u_nb / 10, bytes);
		ft_putchar(u_nb % 10 + '0', bytes);
	}
	else
		ft_putchar(u_nb + '0', bytes);
}

void	ft_print_udecimal(va_list arg, int *bytes)
{
	unsigned int	num;

	num = va_arg(arg, unsigned int);
	ft_putu_nbr(num, bytes);
}
