/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:11:33 by claferna          #+#    #+#             */
/*   Updated: 2024/03/15 20:05:00 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
**
** DESCRIPTION: Allocates sufficient memory for a copy of the string s1, does
** the copy, and returns a pointer to it. The pointer may subsequently be used
** as an argument to the function free.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;

	copy = (char *)malloc(ft_strlen(s1) + 1);
	if (copy == NULL)
		return (0);
	ft_memcpy(copy, s1, ft_strlen(s1) + 1);
	return (copy);
}
/*
#include <stdio.h>

int main(void)
{
	const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);

    if (copia != NULL) {
        printf("Copia: %s\n", copia);
        free(copia); // Liberamos la memoria después de usarla
    } else {
        printf("Error al duplicar la cadena.\n");
    }

    return 0;
}*/
