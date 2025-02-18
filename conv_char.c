/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:41:29 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/17 21:26:20 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_char(va_list ap,ssize_t *return_value)
{
    char c;
    int count;
    c = va_arg(ap, char)
    count = ft_putchar_fd(c,1);
    return(count);
}
