/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_pointer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:32:22 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 15:05:27 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv_pointer(void *ptr)
{
	int	count;

	if (ptr == NULL)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	count = (int)write(1, "0x", 2);
	count += ft_puthexnbr_for_ptr((uintptr_t)ptr);
	return (count);
}
