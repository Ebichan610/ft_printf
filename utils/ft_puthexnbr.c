/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:56:55 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 15:03:21 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_puthexnbr_in_low(unsigned int n)
{
	char	c;
	ssize_t	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexnbr_in_low(n / 16);
	if (n % 16 >= 10)
		c = (n % 16) - 10 + 'a';
	else
		c = (n % 16) + '0';
	count += write(1, &c, 1);
	return ((int)count);
}

int	ft_puthexnbr_in_up(unsigned int n)
{
	char	c;
	ssize_t	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexnbr_in_up(n / 16);
	if (n % 16 >= 10)
		c = (n % 16) - 10 + 'A';
	else
		c = (n % 16) + '0';
	count += write(1, &c, 1);
	return ((int)count);
}

int	ft_puthexnbr_for_ptr(uintptr_t n)
{
	char	c;
	ssize_t	count;

	count = 0;
	if (n >= 16)
		count += ft_puthexnbr_for_ptr(n / 16);
	if (n % 16 >= 10)
		c = (n % 16) - 10 + 'a';
	else
		c = (n % 16) + '0';
	count += write(1, &c, 1);
	return ((int)count);
}
