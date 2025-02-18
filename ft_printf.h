/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:58:34 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/18 16:19:22 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include "utils/libft.h"

int ft_printf(char const *format, ...);
int check_specifier(va_list ap, char const *format, ssize_t *return_value);
int conv_char(va_list ap);
int conv_decint(va_list ap);
int conv_hexint(va_list ap);
int conv_percent();
int conv_pointer(va_list ap);
int conv_str(va_list ap);
int conv_unsdecint(va_list ap);
int ft_puthexnbr(int n);

#endif
