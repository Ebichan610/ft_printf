/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:12:18 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/17 21:23:48 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_specifier(va_list ap, char const *format, ssize_t *return_value)
{
    int count;

    count = 0;
    format++;
    if(*format == c)
        count = conv_char(ap,return_value);
    else if(*format == s)
        count = conv_str(ap,return_value);
    else if(*format == p)
        count = conv_pointer(ap,return_value);
    else if(*format == d || *format == i)
        count = conv_pointer(ap,return_value);
    else if(*format == u)
        count = conv_unsdecint(ap,return_value);
    else if(*format == x || *format == X)
        count = conv_hexint(ap,return_value);
    else if(*format == %)
        count = conv_percent(return_value);
    else
        *return_value = -1;
    return (count);
}
