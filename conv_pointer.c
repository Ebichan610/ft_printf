/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:32:22 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 16:26:28 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int conv_pointer(va_list ap)
{
    void *ptr;
    ssize_t count;
    ptr = va_arg(ap, void*);
    if(ptr == NULL)
    {
        count = write(1,"(nil)",5);
        return(count);
    }
    count = write(1,"0x",2);
    count += ft_puthexnbr((uintptr_t)ptr);
    return (count);
}
