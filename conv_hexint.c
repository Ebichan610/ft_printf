/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:45:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 21:03:57 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_hexint(int num,char c)
{
    int count;
    if(c == 'x')
        count = ft_puthexnbr_in_low(num);
    else
        count = ft_puthexnbr_in_up(num);
    return(count);
}
