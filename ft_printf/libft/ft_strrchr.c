/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:28:37 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 15:55:45 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función strrchr de la biblioteca estándar de C.
* "locates the last occurrence of c in s."
* @param s Cadena en la que buscar c.
* @param c Carácter a buscar.
* @return Puntero a la posición en la que se ha encontrado el carácter.
*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	found;

	i = ft_strlen(s);
	found = 0;
	if ((unsigned char) c == '\0')
		return ((char *)&s[i]);
	while (i > 0 && !found)
	{
		if ((unsigned char) s[i - 1] == (unsigned char) c)
			found = 1;
		else
			i--;
	}
	if (found)
		return ((char *)&s[i - 1]);
	else
		return (NULL);
}
