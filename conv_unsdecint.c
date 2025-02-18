/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_unsdecint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:45:32 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/17 21:44:58 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_unsdecint(va_list ap)
{
    int num;
    int count;
    num = va_arg(ap, unsigned int);
    count = ft_putnbr_fd(num,1);
    return (count);
}
