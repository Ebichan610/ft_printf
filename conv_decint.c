/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_decint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:46:00 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 16:18:12 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_decint(va_list ap)
{
    int num;
    int count;
    num = va_arg(ap, int);
    count = ft_putnbr_fd(num,1);
    return (count);
}
