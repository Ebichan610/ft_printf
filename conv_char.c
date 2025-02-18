/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:41:29 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 17:22:28 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_char(va_list ap)
{
    char c;
    int count;
    c = (char)va_arg(ap, int);
    count = ft_putchar_fd(c,1);
    return(count);
}
