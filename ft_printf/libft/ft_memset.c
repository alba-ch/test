/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:00:54 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 16:18:01 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/***
* Imita la función memset de la biblioteca estándar de C.
* "fills the first n bytes of the memory area pointed to by s with
* the constant byte c"
* @param str Cadena a modificar.
* @param c Caracter a insertar.
* @param n Número de bytes a cambiar.
* @return Puntero a la cadena modificada.
*/
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = (unsigned char *) str;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
