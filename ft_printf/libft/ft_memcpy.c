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
* Imita la función memcpy de la biblioteca estándar de C.
* "copies n bytes from memory area src to memory area dest"
* @param dst Cadena destino.
* @param src Cadena origen.
* @param n Número de bytes a copiar.
* @return Puntero a la cadena destino.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*sd;
	size_t			i;

	i = 0;
	sr = (unsigned char *) src;
	sd = (unsigned char *) dst;
	if (!sr && !sd)
		return (NULL);
	while (i < n)
	{
		sd[i] = sr[i];
		i++;
	}
	return (sd);
}
