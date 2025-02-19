/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 01:00:30 by yebi              #+#    #+#             */
/*   Updated: 2025/02/19 15:13:23 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			count += check_specifier(ap, format);
			format++;
		}
		else
		{
			count += ft_putchar(*format);
		}
		format++;
	}
	va_end(ap);
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n", 'a',
// 			"abcde", "abcde", 123, -123, -23, -23, -23));
// 	printf("%d\n", printf("%c\n%s\n%p\n%d\n%i\n%u\n%x\n%X\n%%\n", 'a', "abcde",
// 			"abcde", 123, -123, -23, -23, -23));
// 	return (0);
// }
