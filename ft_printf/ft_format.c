/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:40:09 by marvin            #+#    #+#             */
/*   Updated: 2023/08/10 15:43:28 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int ft_put_int(va_list arg_list)
{
    int     printed;
    char    *n;

    n = ft_aux_itoa(arg_list);
    printed = ft_aux_putstr_fd(n, 1);
    free(n);
    return (printed);
}

int ft_put_uint(va_list arg_list)
{
    int     printed;
    char    *n;

    n = ft_aux_itoa(arg_list);
    printed = ft_aux_putstr_fd(n, 1);
    free(n);
    return (printed);
}

int ft_put_ptr(va_list arg_list)
{
    int     printed;
    char    *n;

    n = ft_aux_itoa(arg_list);
    printed = ft_aux_putstr_fd(n, 1);
    free(n);
    return (printed);
}

int ft_put_hex(va_list arg_list, char format)
{
    int     printed;
    char    *n;

    if (format == 'X')
        n = ft_aux_itoa(arg_list);
    else
        n = ft_aux_itoa(arg_list);
    printed = ft_aux_putstr_fd(n, 1);
    free(n);
    return (printed);
}