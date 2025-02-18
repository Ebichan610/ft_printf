/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:56:55 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/17 21:37:22 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthexnbr(int n)
{
    char    c;
    int count;
    int tmp;
    
    count = 0;
    tmp = 0;
    if(n == -2147483648)
    {
        count = write(1,"-80000000",9);
        return(count);
    }
    if(n < 0)
    {
        tmp = write(1,"-",1);
        n *= -1;
    }
    if (n >= 16)
		count += ft_puthexnbr(n / 16);
    if(n % 16 >= 10)
	    c = (n % 16) - 10 + 'a';
    else
        c = (n % 16) + '0';
	tmp = write(1, &c, 1);
	count += tmp;
	return (count);
}
