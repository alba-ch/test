/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:28:37 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 15:51:19 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/***
* Imita la función strchr de la biblioteca estándar de C.
* "locates the first occurrence of c in the string pointed to by s."
* @param s Cadena de carácteres donde buscar.
* @param c Carácter a localizar.
* @return Puntero a la posición donde se ha encontrado el carácter.
*/
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	found;

	i = 0;
	found = 0;
	if (c > 127)
		c = c % 256;
	while (s[i] && !found)
	{
		if (s[i] == c)
			found = 1;
		else
			i++;
	}
	if (!found && c != '\0')
		return (NULL);
	return ((char *) &s[i]);
}
