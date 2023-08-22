/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:55:30 by achichar          #+#    #+#             */
/*   Updated: 2023/05/03 10:55:36 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función isascii de la biblioteca estándar de C.
* "checks for an ascii character"
* @param c Carácter a comprobar.
* @return 1 si es ascii, 0 caso contrario.
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
