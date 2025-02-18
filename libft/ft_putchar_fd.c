/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 07:36:49 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 17:23:41 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	int count;
	count = 0;
	count = write(fd, &c, 1);
	if(count == -1)
		return (-1);
	return (count);
}

// int main()
// {
//     ft_putchar_fd('d',1);
// }
