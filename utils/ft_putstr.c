/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:30:00 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 19:15:33 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putstr(char *s)
{
	ssize_t	count;
	ssize_t	tmp;

	count = 0;
	tmp = 0;
	if (s == NULL)
	{
		count = write(1, "(null)", 6);
		return ((int)count);
	}
	while (*s)
	{
		tmp = ft_putchar(*s);
		if (tmp == -1)
			return (-1);
		count += tmp;
		s++;
	}
	return ((int)count);
}

// int main()
// {
//     ft_putstr_fd("sfadf109-,.s",1);
//     return (0);
// }
