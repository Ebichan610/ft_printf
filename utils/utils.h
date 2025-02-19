/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebi <yebi@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:29:56 by yebi              #+#    #+#             */
/*   Updated: 2025/02/19 09:30:14 by yebi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_puthexnbr_in_low(unsigned int n);
int	ft_puthexnbr_in_up(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putuintnbr(unsigned int n);
int	ft_puthexnbr_for_ptr(uintptr_t n);

#endif