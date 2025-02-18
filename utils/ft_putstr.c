/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 08:30:00 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 21:41:31 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	ft_putstr(char *s)
{
	int count;
	count = 0;
	if (s == NULL)
    {
        write(1, "(null)", 6);
        return 6;
    }
	while (*s)
	{
		count += ft_putchar(*s);
		s++;
		
	}
	return(count);
}

// int main()
// {
//     ft_putstr_fd("sfadf109-,.s",1);
//     return (0);
// }
