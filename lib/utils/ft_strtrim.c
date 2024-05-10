/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:29:24 by claferna          #+#    #+#             */
/*   Updated: 2024/04/16 20:30:22 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Removes all character from the string 'set' from the beginning
** adn from the end of 's1', until it finds a character not belongning to
** 'set'. The resulting string is returned with a reservation of malloc.
*/
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux_s1;
	int		i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	i = ft_strlen(s1);
	while (i && s1[i -1] && ft_strchr(set, s1[i]) != 0)
		i--;
	aux_s1 = (char *)malloc(sizeof(char) * (i + 1));
	if (!aux_s1)
		return (0);
	ft_memcpy(aux_s1, s1, i);
	aux_s1[i] = '\0';
	return (aux_s1);
}
/*
#include <stdio.h>
int		main(void)
{
	char const	*s1 = "hello h h";
	char const	*set = "h ";
	char		*trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original string: \"%s\"\n", s1);
		printf("Trimmed string: \"%s\"\n", trimmed);
		free(trimmed);
	}
	else
		printf("Failed to trim string.\n");
	return (0);
}*/
