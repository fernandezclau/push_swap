/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:42:24 by claferna          #+#    #+#             */
/*   Updated: 2024/03/17 20:53:11 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Reserves and returns a substring of the string 's'. The
** substrig starts from the indes 'start' and has a maximum length 'len'
*/

#include "libft.h"

static char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	new_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return (substr);
	}
	if (s_len - start < len)
		new_len = s_len - start;
	else
		new_len = len;
	substr = malloc(new_len + 1);
	if (substr)
	{
		ft_strncpy(substr, s + start, new_len);
		substr[new_len] = '\0';
	}
	return (substr);
}
/*
#include <stdio.h>

int main() {
    const char *str = "Hello, world!";
    size_t start = 7; // Índice de inicio
    size_t len = 5;   // Longitud del substring

    char *result = ft_substr(str, start, len);
    if (result) {
        printf("Substring: %s\n", result);
        free(result); // Liberamos la memoria asignada
    } else {
        printf("Índice de inicio fuera de rango\n");
    }

    return 0;
}*/
