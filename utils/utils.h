/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:29:56 by yebi              #+#    #+#             */
/*   Updated: 2025/02/18 21:41:50 by ebichan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int	ft_putchar(char c);
int ft_puthexnbr_in_low(unsigned int n);
int ft_puthexnbr_in_up(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int ft_putuintnbr(unsigned int n);

#endif