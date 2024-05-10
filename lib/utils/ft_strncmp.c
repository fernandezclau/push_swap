/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:03:51 by claferna          #+#    #+#             */
/*   Updated: 2024/03/17 16:35:00 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Compares not more than n characters.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	aux_s1;
	unsigned char	aux_s2;

	while (n-- > 0)
	{
		aux_s1 = *(unsigned char *)s1++;
		aux_s2 = *(unsigned char *)s2++;
		if (aux_s1 != aux_s2)
			return (aux_s1 - aux_s2);
		if (aux_s1 == '\0')
			return (0);
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_strncmp("hola", "holb", 5));
}*/
