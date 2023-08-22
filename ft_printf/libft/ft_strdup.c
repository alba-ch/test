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
* Imita la función strdup de la biblioteca estándar de C.
* "allocates sufficient memory for a copy of the string s1, does the copy, 
* and returns a pointer to it."
* @param s Cadena de carácteres a crear una copia.
* @return Puntero a la copia.
*/
char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *) malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}
