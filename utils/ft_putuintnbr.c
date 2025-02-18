/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuintnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:05:41 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 21:41:37 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int ft_putuintnbr(unsigned int n)
{
    char	c;
	int count;
	int tmp;

	count = 0;
	tmp = 0;
	if (n >= 10)
		count += ft_putuintnbr(n / 10);
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
