/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:44:51 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 21:41:26 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putnbr(int n)
{
	char	c;
	int count;
	int tmp;

	count = 0;
	tmp = 0;
	if (n == INT_MIN)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (n < 0)
	{
		tmp = write(1, "-", 1);
		if(tmp == -1)
			return (-1);
		count += tmp;
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	tmp = write(1, &c, 1);
	if(tmp == -1)
	{
		if(count == 0)
			return (-1);
		return (count);
	}
	count += tmp;
	return (count);
}

// int main()
// {
//     ft_putnbr_fd(648,1);
//     return (0);
// }
