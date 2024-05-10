/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:44:03 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:15:24 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY <string.h>
**
** DESCRIPTION: Locates the first occurrence of c (converted to a char)
** in the string pointed to by s. The terminating null character is considered
** to be part of the string; therefore if c is '\0', the functions locate the
** terminating '\0'
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char) c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *) s);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s", ft_strchr("hola", 's'));
}*/
