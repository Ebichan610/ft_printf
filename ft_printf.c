/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:00:30 by yebi              #+#    #+#             */
/*   Updated: 2025/02/18 17:26:25 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int count;

    va_start(ap,format);
    count = 0;
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            count += check_specifier(ap, format);
            if(count == 0)
                return (-1);
        }
        else
        {
            ft_putchar_fd(*format,1);
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
