/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:57:12 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 16:58:12 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Copies up to dstsize - 1 characters from the string src to dst
** NULL terminating the result if dstsize is not 0.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		src_len;

	src_len = ft_strlen(src);
	if (!dst && !src)
		return (0);
	while (*src != '\0' && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <stddef.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20]; 
    // Copiamos la cadena src en dest
    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Cadena copiada: %s\n", dest);
    printf("Longitud de la cadena copiada: %zu\n", len);

    return 0;
}*/
