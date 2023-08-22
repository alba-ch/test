/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:59:20 by achichar          #+#    #+#             */
/*   Updated: 2023/07/07 01:20:34 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Función adicional que cuenta el número de palabras de una cadena.
* @param s Cadena de carácteres.
* @param c Carácter separador.
* @return Cantidad de palabras en la cadena separadas por 'c'.
*/
static int	ft_numwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

/***
* Función adicional que libera la memoria dinámica de una matriz bidimensional.
* @param strings Matriz bidimensional de carácteres.
* @param pos Posición de la última fila a liberar.
* @return NULL (tras haber liberado la matriz).
*/
static char	**ft_free(char **strings, unsigned int pos)
{
	while (pos--)
		free(strings[pos]);
	free(strings);
	return (NULL);
}

/***
* Función adicional que recorre la cadena y va guardando palabras encontradas.
* @param strings Matriz bidimensional de carácteres.
* @param s Cadena donde buscar palabras.
* @param c Carácter separador.
* @return Matriz bidimensional contenedora de palabras.
*/
static char	**ft_find_words(char **strings, char const *s, char c)
{
	unsigned int	nextocc;
	unsigned int	i;
	unsigned int	pos;

	i = 0;
	pos = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nextocc = i;
			while (s[nextocc] != c && s[nextocc])
				nextocc++;
			strings[pos] = ft_substr(s, i, nextocc - i);
			if (!strings[pos])
				return (ft_free(strings, pos));
			pos++;
			i = nextocc;
		}
		while (s[i] == c && s[i])
			i++;
	}
	strings[pos] = NULL;
	return (strings);
}

/***
* Función que geenera un array de strings resultante de separar la string ’s’ en 
* substrings utilizando el caracter ’c’ como delimitador. 
* @param strings Matriz bidimensional de carácteres.
* @param s Cadena donde buscar palabras.
* @param c Carácter separador.
* @return Matriz bidimensional con las palabras de la cadena terminada en NULL.
*/
char	**ft_split(char const *s, char c)
{
	char			**strings;

	strings = malloc(sizeof(char *) * (ft_numwords(s, c) + 1));
	if (!strings)
		return (NULL);
	strings = ft_find_words(strings, s, c);
	return (strings);
}
