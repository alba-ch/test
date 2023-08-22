/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:17:55 by achichar          #+#    #+#             */
/*   Updated: 2023/05/02 20:49:46 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
* Imita la función isdigit de la biblioteca estándar de C.
* "checks for a digit (0 through 9)"
* @param c Carácter a comprobar.
* @return 1 si es un dígito, 0 caso contrario.
*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int	main(void)
// {
// 	char	*test0 = "1610";
// 	char	*test1 = "";
// 	char	*test2 = "33035.";
// 	printf("%s: %d\nNothing: %d\n%s: %d", test0, ft_isdigit(test0), 
// 	ft_isdigit(test1), test2, ft_str_is_numeric(test2));
// }
