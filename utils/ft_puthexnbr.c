/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:56:55 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 08:26:17 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_puthexnbr_in_low(unsigned int n)
{
	char	c;
	int		count;
	int		tmp;

	count = 0;
	tmp = 0;
	if (n >= 16)
		count += ft_puthexnbr_in_low(n / 16);
	if (n % 16 >= 10)
		c = (n % 16) - 10 + 'a';
	else
		c = (n % 16) + '0';
	tmp = write(1, &c, 1);
	count += tmp;
	return (count);
}

int	ft_puthexnbr_in_up(unsigned int n)
{
	char	c;
	int		count;
	int		tmp;

	count = 0;
	tmp = 0;
	if (n >= 16)
		count += ft_puthexnbr_in_up(n / 16);
	if (n % 16 >= 10)
		c = (n % 16) - 10 + 'A';
	else
		c = (n % 16) + '0';
	tmp = write(1, &c, 1);
	count += tmp;
	return (count);
}
