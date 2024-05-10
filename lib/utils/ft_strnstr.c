/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:34:01 by claferna          #+#    #+#             */
/*   Updated: 2024/03/15 17:20:56 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Locates the first occurrence of the null-terminaded string
** needle in the string haystack, where not more than len characters are
** searched. Characters that appear after a '\0' are not searched.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	needle_len = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (needle[needle_len] != '\0')
		needle_len++;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (j < needle_len && i + j < len && haystack[i + j] == needle[j])
			j++;
		if (j == needle_len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%s", ft_strnstr("loren ipsum dolor sit amet", "ipsumm", 30));
}*/
