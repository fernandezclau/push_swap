/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:44:51 by claferna          #+#    #+#             */
/*   Updated: 2024/03/16 19:02:40 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: To each character of the string 's', apply the function 'f'
** giving as parameters the index of each character within 's' and the address
** of itself character, which can be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
