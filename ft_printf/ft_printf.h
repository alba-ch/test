/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achichar <achichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:10:48 by marvin            #+#    #+#             */
/*   Updated: 2023/08/10 15:51:58 by achichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *s, ...);
int			ft_format_datatype(char specifier, va_list arg_list);

int			ft_aux_putstr_fd(char *s, int fd);
int			ft_aux_putchar_fd(char c, int fd);

int			ft_put_int(va_list arg_list);
int			ft_put_uint(va_list arg_list);
int			ft_put_ptr(va_list arg_list);
int			ft_put_hex(va_list arg_list, char format);

char		*ft_aux_itoa(va_list arg_list);
char		*ft_str_reverse(char *str, int len);
char		*ft_rec_itoa(int n, char *str, int i);

#endif