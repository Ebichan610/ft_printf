/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_hexint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:45:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 08:26:34 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv_hexint(int num, char c)
{
	int	count;

	if (c == 'x')
		count = ft_puthexnbr_in_low(num);
	else
		count = ft_puthexnbr_in_up(num);
	return (count);
}
