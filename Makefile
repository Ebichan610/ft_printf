# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 00:59:33 by yebi              #+#    #+#              #
#    Updated: 2025/02/18 21:44:01 by ebichan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS =	ft_printf.c \
		check_specifier.c \
		conv_char.c \
		conv_hexint.c \
		conv_int.c \
		conv_percent.c \
		conv_pointer.c \
		conv_str.c \
		conv_uint.c \
		utils/ft_putchar.c \
		utils/ft_puthexnbr.c \
		utils/ft_putnbr.c \
		utils/ft_putstr.c \
		utils/ft_putuintnbr.c
		

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

