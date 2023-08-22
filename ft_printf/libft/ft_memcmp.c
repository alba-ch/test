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
* Imita la función memcmp de la biblioteca estándar de C.
* "returns an integer less than, equal to, or greater than zero 
* if the first n bytes of s1 is found, respectively, to be less than, t
* o match, or be greater than the first n bytes of s2"
* @param s1 Cadena a comparar.
* @param s2 Segunda cadena a comparar.
* @param n Número de bytes a comparar.
* @return Número entero <, =, o > que cero
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sr1;
	unsigned char	*sr2;
	size_t			i;

	i = 0;
	sr1 = (unsigned char *) s1;
	sr2 = (unsigned char *) s2;
	while (i < n)
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
		i++;
	}
	return (0);
}
