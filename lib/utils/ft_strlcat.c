/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:08:44 by claferna          #+#    #+#             */
/*   Updated: 2024/03/15 17:54:14 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Appends string src to the end of dst.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d;
	size_t		s;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	d = ft_strlen(dst);
	s = 0;
	while (src[s] != '\0' && d + 1 < dstsize)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[s]));
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";
    char *src = "world!";

    // Concatenar src al final de dest
    size_t new_len = strlcat(dest, src, sizeof(dest));

    printf("Cadena concatenada: %s\n", dest);
    printf("Longitud de la cadena concatenada: %zu\n", new_len);

    return 0;
}*/
