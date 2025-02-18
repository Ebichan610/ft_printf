/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:00:30 by yebi              #+#    #+#             */
/*   Updated: 2025/02/18 16:19:59 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    ssize_t *return_value;
    int count;

    va_start(ap,format);
    *return_value = 0;
    count = 0;
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            count += check_specifier(ap, format,return_value);
            if(*return_value < 0)
            {
                if(count == 0)
                    return (-1);
                return (count);
            }
        }
        else
        {
            ft_putchar_fd(*format,1);
        }
        format++;
    }
    return (count);
}

int main()
{
    char const* format= "aa\n";
    ft_printf(format);
    printf(format);
    return (0);
}
