/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:10:10 by claferna          #+#    #+#             */
/*   Updated: 2024/03/18 19:03:18 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Copies len bytes from string src to string dst. The two
** strings may overlap; the copy is always in a non-destructive manner.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int main() {
    char buffer[] = "ABCDEFG";
    //size_t len = strlen(buffer) + 1; // Longitud de la cadena, incluyendo 
    // Mostrar el buffer original
    printf("Buffer original: %s\n", buffer);

    // Mover los primeros 3 caracteres al final del buffer usando memmove
    memmove(buffer + 4, buffer, 3);

    // Mostrar el resultado después de usar memmove
    printf("Buffer después de memmove: %s\n", buffer);

    return 0;
}*/
