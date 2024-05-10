/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:44:46 by claferna          #+#    #+#             */
/*   Updated: 2024/03/13 17:43:56 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Write n zeroed bytes to the string s. If n is zero bzero()
** does nothing.
*/

#include "libft.h"

/*void	bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
