/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:09:31 by claferna          #+#    #+#             */
/*   Updated: 2024/03/13 18:14:19 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Locates the first occurrence of c (converted to an unsigned
** char) in string s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n--)
	{
		if (*ptr != (unsigned char) c)
			ptr++;
		else
			return (ptr);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_memchr("holaa", 'a', 4));
}*/
