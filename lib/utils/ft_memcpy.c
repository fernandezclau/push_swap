/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:32:50 by claferna          #+#    #+#             */
/*   Updated: 2024/03/13 20:28:44 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <string.h>
**
** DESCRIPTION: Copies n bytes from memory area src to memory area dst.
** If dst and src overlap, behavior is undefined.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
