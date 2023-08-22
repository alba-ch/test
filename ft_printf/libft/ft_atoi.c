/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:58:10 by achichar          #+#    #+#             */
/*   Updated: 2023/06/24 14:58:10 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * Función auxiliar que comprueba si el carácter c es un "espacio".
 * @param c Carácter a comprobar.
 * @return 1 si es espacio, 0 caso contrario.
*/
static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f');
}

/***
* Imitación de la función atoi de la librería estándar de C.
* "converts the initial portion of the string pointed to by nptr to int"
* @param str Cadena a convertir.
* @return El entero convertido.
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		n = str[i] - '0';
		result = result * 10 + n;
		i++;
	}
	return (result * sign);
}
