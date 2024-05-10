/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:30:17 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:02:27 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
**
** DESCRIPTION: Tests for a decimal digit character.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
