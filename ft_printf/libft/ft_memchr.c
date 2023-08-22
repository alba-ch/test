/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:54 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 12:30:17 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función memchr de la biblioteca estándar de C.
* "scans the initial n bytes of the memory area pointed to 
* y s for the first instance of c"
* @param s Cadena a escanear.
* @param c Carácter a buscar.
* @param n Número de bytes a escanear.
* @return Puntero a donde se encontró c, NULL si no lo encuentra.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sr;
	size_t			i;

	i = 0;
	sr = (unsigned char *) s;
	while (i < n)
	{
		if (sr[i] == (unsigned char) c)
			return ((void *) &sr[i]);
		i++;
	}
	return (NULL);
}
