/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:27:39 by achichar          #+#    #+#             */
/*   Updated: 2023/05/04 15:36:13 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Método que concatena dos strings pasados por parámetro.
* @param s1 Primer string.
* @param s2 Segundo string.
* @return Cadena resultante de la concatenación.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*constr;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	constr = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!constr)
		return (NULL);
	while (s1[i])
	{
		constr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		constr[i] = s2[j];
		j++;
		i++;
	}
	constr[i] = '\0';
	return (constr);
}
