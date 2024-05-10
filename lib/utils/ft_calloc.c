/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:59:37 by claferna          #+#    #+#             */
/*   Updated: 2024/03/15 20:02:55 by claferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: <stdlib.h>
**
** DESCRIPTION: Contiguously allocates enough space for count objects that are
** size bytes of memory each and returns a pointer to the allocated memory.
** Th allocated memory is filled with bytes of value zero.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*ptr;

	total = count * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total);
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	int *arr;
    int num_elements = 5;

    // Reservar memoria para un array de 5 enteros
    arr = (int *)ft_calloc(num_elements, sizeof(int));
    if (arr == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    // Imprimir los valores del array
    printf("Valores del array:\n");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Liberar la memoria asignada
    free(arr);

    return 0;
}*/
