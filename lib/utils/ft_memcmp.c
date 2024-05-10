/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:21:51 by claferna          #+#    #+#             */
/*   Updated: 2024/03/12 18:33:43 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		else
		{
			ptr1++;
			ptr2++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	printf("%d", ft_memcmp("hola", "holA", 4));
}
*/
