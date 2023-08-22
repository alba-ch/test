/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:28:37 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 16:09:17 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función strnstr de la biblioteca estándar de C.
* "locates the first occurrence of the null-terminated string needle in the 
* string haystack, where not more than len characters are searched."
* @param haystack Cadena en la que buscar la ocurrencia.
* @param needle Subcadena a buscar.
* @param len Cantidad de carácteres en los que buscar la subcadena.
* @return Puntero al primer carácter donde se ha encontrado la subcadena.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *) haystack);
	while (haystack[i] && (i <= len - len_needle) && (len >= len_needle))
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp(&haystack[i], needle, len_needle) == 0)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
