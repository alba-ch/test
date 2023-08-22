/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:17:55 by achichar          #+#    #+#             */
/*   Updated: 2023/05/02 20:51:27 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función calloc de la biblioteca estándar de C.
* "allocates size bytes and returns a pointer to the allocated memory. 
* The memory is set to zero. If size is 0, then malloc() returns either NULL 
* or a unique pointer value that can later be successfully passed to free()"
* @param nelems Número de elementos a reservar memoria.
* @param size Tamaño de los elementos.
* @return Puntero a la memoria que hemos reservado.
*/
void	*ft_calloc(size_t nelems, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(nelems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nelems * size);
	return (ptr);
}
