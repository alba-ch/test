/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:38:59 by achichar          #+#    #+#             */
/*   Updated: 2023/08/10 15:53:56 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

/***
* Función auxiliar el número de dígitos de un número.
* @param n Número a comprobar.
* @return La longitud del número.
*/
static int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

/***
* Función auxiliar que invierte una cadena.
* @param str Cadena a invertir.
* @param len Longitud de la cadena.
* @return La cadena invertida.
*/
char	*ft_str_reverse(char *str, int len)
{
	int		temp;
	int		i;

	i = 0;
	len = ft_strlen(str);
	if (str[0] == '-')
	{
		i++;
		len++;
	}
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

/***
* Función auxiliar recursiva para convertir un número a una cadena.
* @param n Número a convertir.
* @param str Cadena a escribir.
* @param i Índice de la cadena.
* @return El número convertido a string.
*/
char	*ft_rec_itoa(int n, char *str, int i)
{
	if (n >= 10)
	{
		ft_rec_itoa(n / 10, str, i + 1);
		str[i] = n % 10 + '0';
	}
	else
	{
		str[i] = n + '0';
		str[i + 1] = '\0';
	}
	return (str);
}

/***
* Imita la función itoa de la biblioteca estándar de C.
* "c coverts the integer n into a character string"
* @param n Número a convertir.
* @return El número convertido a string.
*/
char	*ft_aux_itoa(va_list arg_list)
{
	int		i;
	int		len;
	int	n;
	char	*str;

	n = va_arg(arg_list, int);
	if (n < -2147483647)
		return (ft_strdup("-2147483648"));
	i = 0;
	len = ft_getlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		i++;
	}
	str = ft_str_reverse(ft_rec_itoa(n, str, i), len);
	return (str);
}

