/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:54:57 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:03:41 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Locates the last occurrence of c in the string pointed to by s.
** The terminating null character is considered to be part of the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*result;

	result = 0;
	while (*s)
	{
		if (*s == (char) c)
			result = s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return ((char *) result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_strrchr("bonjour", '\0')); 
}
*/
