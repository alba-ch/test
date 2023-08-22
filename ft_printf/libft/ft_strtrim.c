/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:27:39 by achichar          #+#    #+#             */
/*   Updated: 2023/05/04 15:43:08 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Método que elimina todos los caracteres de la string ’set’ desde el principio 
* y desde el final de s1, hasta encontrar un caracter no perteneciente a set.
* @param s1 Cadena de carácteres.
* @param set Listado de carácteres a eliminar del principio y final de s1.
* @return Puntero a la nueva cadena.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char			*newstr;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	k = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && ft_strrchr(set, s1[i]))
		i++;
	if (i == j + 1 || s1[0] == '\0')
		return (ft_strdup(""));
	while (s1[j] && ft_strrchr(set, s1[j]))
		j--;
	newstr = (char *) malloc(sizeof(char) * (j - i + 2));
	if (!newstr)
		return (NULL);
	while (i <= j)
	{
		newstr[k] = s1[i];
		k++;
		i++;
	}
	newstr[k] = '\0';
	return (newstr);
}
