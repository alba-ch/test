/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:17:55 by achichar          #+#    #+#             */
/*   Updated: 2023/05/02 20:42:56 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función isalpha de la biblioteca estándar de C.
* "checks for an alphabetic character"
* @param c Carácter a comprobar.
* @return 1 si es alfabético, 0 caso contrario.
*/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
