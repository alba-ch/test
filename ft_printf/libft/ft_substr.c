/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:27:39 by achichar          #+#    #+#             */
/*   Updated: 2023/05/04 15:51:53 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Método que devuelve un substring del string ’s’.
* @param s Cadena de carácteres.
* @param start Posición en s dónde empezar el substring.
* @param len Posición en s dónde terminar el substring.
* @return Puntero al substring generado.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	strlen;

	i = 0;
	strlen = ft_strlen(s);
	if (start > strlen)
		return (ft_strdup(""));
	if (len > strlen - start)
		len = strlen - start;
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	if (start < strlen)
	{
		while (s[start] && i < len)
		{
			substr[i] = s[start];
			i++;
			start++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
