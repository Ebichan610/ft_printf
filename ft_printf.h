/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:58:34 by ebichan           #+#    #+#             */
/*   Updated: 2025/02/19 08:26:46 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "utils/utils.h"

int	ft_printf(char const *format, ...);
int	check_specifier(va_list ap, char const *format);
int	conv_char(int c);
int	conv_hexint(int num, char c);
int	conv_int(int num);
int	conv_percent(void);
int	conv_pointer(void *ptr);
int	conv_str(char *str);
int	conv_uint(unsigned int num);

#endif
