/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:00:30 by yebi              #+#    #+#             */
/*   Updated: 2025/02/18 21:36:43 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int count;

    count = 0;
    va_start(ap,format);
    while(*format)
    {
        if(*format == '%')
        {
            count += check_specifier(ap, format);
            format++;
        }
        else
        {
            count += ft_putchar(*format);
        }
        format++;
    }
    va_end(ap);
    return (count);
}

// #include <stdio.h>

// int main()
// {
//     ft_printf("aa\n");
//     printf("aa\n");
//     return (0);
// }
