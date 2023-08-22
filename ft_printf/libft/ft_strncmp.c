/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:28:37 by achichar          #+#    #+#             */
/*   Updated: 2023/02/20 11:16:17 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función strncmp de la biblioteca estándar de C.
* "lexicographically compare the null-terminated strings s1 and s2."
* @param s1 Primera cadena.
* @param s2 Segunda cadena.
* @param n Número de carácteres a comparar.
* @return Entero mayor, menor o igual a cero.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n && str1[i] && str1[i] == str2[i])
	{
		i++;
	}
	if (n == i)
		return (0);
	return (str1[i] - str2[i]);
}
