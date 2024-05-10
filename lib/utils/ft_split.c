/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 10:13:32 by claferna          #+#    #+#             */
/*   Updated: 2024/04/13 17:19:23 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
**
** DESCRIPTION: Reserves an array of strings resulting from separating the
** string 's' into substrings using the character 'c' as a delimiter. The
** array must be terminated with a NULL pointer.
*/

#include "libft.h"

/*
** DESCRIPTION: Counts the ocurrences of the delimiter
*/

static size_t	ft_count_words(const char *s, char c)
{
	size_t		i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (i);
}

static int	ft_word_len(const char *s, char c)
{
	const char	*aux;
	int			i;

	i = 0;
	aux = s;
	while (*aux != c && *aux)
	{
		aux++;
		i++;
	}
	return (i);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*aux_s;

	aux_s = (char *) malloc(sizeof(char) * (n + 1));
	if (!aux_s)
		return (0);
	i = 0;
	while (i < n)
	{
		aux_s[i] = s[i];
		i++;
	}
	aux_s[i] = '\0';
	return (aux_s);
}

static void	ft_free(char **s, int i)
{
	while (i--)
		free(s[i]);
	free(s);
}

char	**ft_split(char const *s, char c)
{
	int		num_delimiter;
	int		i;
	char	**s_aux;

	i = 0;
	num_delimiter = ft_count_words(s, c);
	s_aux = (char **)malloc((num_delimiter + 1) * sizeof(char *));
	if (!s_aux)
		return (0);
	while (i < num_delimiter)
	{
		while (*s == c && *s != '\0')
			s++;
		s_aux[i] = ft_strndup(s, ft_word_len(s, c));
		if (!s_aux)
		{
			ft_free(s_aux, i);
			return (0);
		}
		s += ft_word_len(s, c);
		i++;
	}
	s_aux[i] = 0;
	return (s_aux);
}
/*
#include <stdio.h>

int		main(void)
{
	const char *str = "Hola,que,tal,estas";
	char delimiter = ',';
	char **tokens;

	tokens = ft_split(str, delimiter);

	if (tokens)
	{
		// Iteramos sobre el array de strings resultantes e imprimimos cada token
		for (int i = 0; tokens[i] != NULL; i++)
		{
			printf("Token %d: %s\n", i, tokens[i]);
		}

		// Liberamos la memoria asignada para el array de strings
		free(tokens);
	}
	else
	{
		printf("Error: no se pudo dividir la cadena.\n");
	}

	return (0);
}*/
