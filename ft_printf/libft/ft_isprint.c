/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alba <alba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 03:35:06 by alba              #+#    #+#             */
/*   Updated: 2023/06/21 03:35:06 by alba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función isprint de la biblioteca estándar de C.
* "checks for any printable character including space"
* @param c Carácter a comprobar.
* @return 1 si es imprimible, 0 caso contrario.
*/
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
