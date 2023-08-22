/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:28:37 by achichar          #+#    #+#             */
/*   Updated: 2023/02/17 14:08:43 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función strlcat de la biblioteca estándar de C.
* "appends string src to the end of dst."
* @param dest Cadena de destino.
* @param src Cadena a añadir.
* @param dstsize Longitud de dest.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	i = len_d;
	j = 0;
	while (src[j] && i < dstsize - 1 && j < dstsize - len_d - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dstsize < len_d)
		return (len_s + dstsize);
	return (len_d + len_s);
}
