/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:18 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 17:20:19 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_specifier(va_list ap, char const *format)
{
    int count;

    count = 0;
    format++;
    if(*format == 'c')
        count = conv_char(ap);
    else if(*format == 's')
        count = conv_str(ap);
    else if(*format == 'p')
        count = conv_pointer(ap);
    else if(*format == 'd' || *format == 'i')
        count = conv_pointer(ap);
    else if(*format == 'u')
        count = conv_unsdecint(ap);
    else if(*format == 'x' || *format == 'X')
        count = conv_hexint(ap);
    else if(*format == '%')
        count = conv_percent();
    else
        return(-1);
    return (count);
}
