/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:53:51 by claferna          #+#    #+#             */
/*   Updated: 2024/03/15 19:58:16 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Reserves and returns a new string, formed by the concatenation
** of 's1' and 's2'.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux_s1;
	int		i;
	int		j;

	aux_s1 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!aux_s1 || !s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		aux_s1[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		aux_s1[i++] = s2[j++];
	aux_s1[i] = '\0';
	return (aux_s1);
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
