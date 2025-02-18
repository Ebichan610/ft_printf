/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:21:53 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 17:23:19 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_str(va_list ap)
{
    char *dst;
    int count;

    dst = va_arg(ap,char *);
    count =ft_putstr_fd(dst,1);
    return (count);
}
