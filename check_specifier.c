/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:18 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 21:39:14 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_specifier(va_list ap, char const *format)
{
    int count;

    count = 0;
    format++;
    if(*format == 'c')
        count = conv_char(va_arg(ap,int));
    else if(*format == 's')
        count = conv_str(va_arg(ap,char *));
    else if(*format == 'p')
        count = conv_pointer(va_arg(ap,void *));
    else if(*format == 'd' || *format == 'i')
        count = conv_int((long)va_arg(ap,int));
    else if(*format == 'u')
        count = conv_uint(va_arg(ap,unsigned int));
    else if(*format == 'x' || *format == 'X')
        count = conv_hexint(va_arg(ap,int),*format);
    else if(*format == '%')
        count = conv_percent();
    else
        return(-1);
    return (count);
}
