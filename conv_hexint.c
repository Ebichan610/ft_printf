/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:45:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 16:18:11 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_hexint(va_list ap)
{
    int num;
    int count;

    num = va_arg(ap,int);
    count = ft_puthexnbr(num);
    return(count);
}
