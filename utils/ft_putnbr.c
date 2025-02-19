/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:44:51 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 19:26:20 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

static int	ft_putnbr_recursive(unsigned int n)
{
	int	count;
	int	tmp;

	count = 0;
	if (n >= 10)
	{
		tmp = ft_putnbr_recursive(n / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}
	tmp = ft_putchar((n % 10) + '0');
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;
	int	tmp;

	count = 0;
	if (n == INT_MIN)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		tmp = ft_putchar('-');
		if (tmp == -1)
			return (-1);
		count += tmp;
		n = -n;
	}
	tmp = ft_putnbr_recursive((unsigned int)n);
	if (tmp == -1)
		return (-1);
	count += tmp;
	return (count);
}

// int main()
// {
//     ft_putnbr_fd(648,1);
//     return (0);
// }
