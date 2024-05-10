/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:17:37 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:02:47 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <ctype.h>
**
** DESCRIPTION: Tests for any printinf character, including (` ')
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
