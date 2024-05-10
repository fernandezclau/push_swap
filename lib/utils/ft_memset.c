/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:31:50 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:03:08 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Write len bytes of value c (converted to an unsigned char)
** to the string b.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
