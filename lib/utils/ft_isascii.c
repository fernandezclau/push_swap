/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:04:51 by claferna          #+#    #+#             */
/*   Updated: 2024/03/13 20:50:37 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
**
** DESCRIPTION: Determines if a given character is within the ASCII range,
** which spans from 0 to 127 inclusive
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
