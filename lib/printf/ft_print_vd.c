/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:28:37 by claferna          #+#    #+#             */
/*   Updated: 2024/03/23 15:39:41 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** DESCRIPTION: Funtions to print void.
*/

void	ft_putvd(void *vd, int *bytes)
{
	write(1, "0x", 2);
	*(bytes) += 2;
	if ((long) vd == 0)
	{
		ft_putchar('0', bytes);
		return ;
	}
	ft_puthexa((unsigned long) vd, 1, bytes);
}

void	ft_print_vd(va_list arg, int *bytes)
{
	void	*vd;

	vd = va_arg(arg, void *);
	ft_putvd(vd, bytes);
}
