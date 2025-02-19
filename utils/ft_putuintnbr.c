/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuintnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:05:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 15:01:52 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putuintnbr(unsigned int n)
{
	char	c;
	ssize_t	count;

	count = 0;
	if (n >= 10)
		count += ft_putuintnbr(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return ((int)count);
}
