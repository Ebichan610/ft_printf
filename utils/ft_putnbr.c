/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:44:51 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 22:09:17 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putnbr(int n)
{
	char	c;
	int count;

	count = 0;
	if (n == INT_MIN)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		count += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

// int main()
// {
//     ft_putnbr_fd(648,1);
//     return (0);
// }
