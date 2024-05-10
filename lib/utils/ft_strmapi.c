/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:24:12 by claferna          #+#    #+#             */
/*   Updated: 2024/03/16 18:49:48 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: To each character of the string 's', apply the function
** 'f' giving as parameters the index of each character inside 's' and the
** character itself. It generates a new string with the result of successive
** use of 'f'
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*aux_s;
	int		i;

	aux_s = ft_strdup(s);
	if (!s || !f || !aux_s)
		return (0);
	i = 0;
	while (aux_s[i])
	{
		aux_s[i] = f(i, aux_s[i]);
		i++;
	}
	return (aux_s);
}
