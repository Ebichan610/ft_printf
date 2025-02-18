/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:30:00 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/15 16:09:30 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int count;
	int tmp_byte;
	count = 0;
	tmp_byte = 0;
	while (*s)
	{
		tmp_byte = write(fd, s, 1);
		if(tmp_byte == -1)
		{
			if(count == 0)
				return(-1);
			return(count);
		}
		count++;
		s++;
	}
	return (count);
}

// int main()
// {
//     ft_putstr_fd("sfadf109-,.s",1);
//     return (0);
// }
