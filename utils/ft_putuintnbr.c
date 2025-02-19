/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuintnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:05:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 19:17:28 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putuintnbr(unsigned int n)
{
	char	c;
	ssize_t	count;
	ssize_t	tmp;

	count = 0;
	if (n >= 10)
	{
		tmp = ft_putuintnbr(n / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	c = (n % 10) + '0';
	tmp = write(1, &c, 1);
	if (tmp == -1)
		return (-1);
	count += tmp;
	return ((int)count);
}
