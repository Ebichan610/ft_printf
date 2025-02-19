/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:30:00 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 15:00:37 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putstr(char *s)
{
	ssize_t	count;

	count = 0;
	if (s == NULL)
	{
		count = write(1, "(null)", 6);
		return ((int)count);
	}
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
	}
	return ((int)count);
}

// int main()
// {
//     ft_putstr_fd("sfadf109-,.s",1);
//     return (0);
// }
