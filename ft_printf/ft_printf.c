/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 12:28:10 by marvin            #+#    #+#             */
/*   Updated: 2023/08/10 15:47:26 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int ft_aux_putchar_fd(char c, int fd)
{
	int	printed;

	printed = 1;
    write(fd, &c, 1);
    return (printed);
}

int ft_aux_putstr_fd(char *s, int fd)
{
    int printed;

    printed = 0;
    while (*s)
    {
        printed += ft_aux_putchar_fd(*s, fd);
        s++;
    }
    return (printed);
}

int	ft_format_datatype(char specifier, va_list arg_list)
{
    int	printed;

    printed = -1;
    // printf("specifier: %c\n", specifier);
    if (specifier == 'i' || specifier == 'd')
        printed = ft_put_int(arg_list);
    else if (specifier == 'u')
        printed = ft_put_uint(arg_list);
    else if (specifier == 'c')
        printed = ft_aux_putchar_fd(va_arg(arg_list, int), 1); // TODO: fix this to check return -1
    else if (specifier == 's')
        printed = ft_aux_putstr_fd(va_arg(arg_list, char *), 1); // TODO: fix this to check return -1
    else if (specifier == 'p')
        printed = ft_put_ptr(arg_list);
    else if (specifier == 'X' || specifier == 'x')
        printed = ft_put_hex(arg_list, specifier);
    else if (specifier == '%')
    {
        ft_aux_putchar_fd('%', 1);
        printed = 1;
    }
    return (printed);
}

int	ft_printf(const char *s, ...)
{
    va_list	arg_list;
    int		printed;
    int     i;
    int     k;

    printed = 0;
    i = 0;
    k = 0;
    va_start(arg_list, s);
    while (s[i])
    {
        if (s[i] == '%')
        {
            // j = 1;
            // while (s[i + j] == ' ')
            //     j++;
            // i += j;
            k = ft_format_datatype(s[i + 1], arg_list);
            // printf("I printed %d chars\n", k);
            if (k == -1)
                return (-1);
            printed += k;
            i++;
        }
        else
        {
            ft_aux_putchar_fd(s[i], 1);
            printed++;
        }
        i++;
    }
    va_end(arg_list);
    return (printed);
}


// int main(void)
// {
//     int printed;

//     printed = ft_printf("Ep %c %c", '0', '1');
//     printf("\n");
//     printf("printed: %d\n", printed);
//     return (0);
// }