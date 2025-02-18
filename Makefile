# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebichan <ebichan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 00:59:33 by yebi              #+#    #+#              #
#    Updated: 2025/02/18 17:29:19 by ebichan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS =	ft_printf.c \
		check_specifier.c \
		conv_char.c \
		conv_decint.c \
		conv_hexint.c \
		conv_percent.c \
		conv_pointer.c \
		conv_str.c \
		conv_unsdecint.c \
		ft_puthexnbr.c \
		utils/ft_atoi.c \
		utils/ft_bzero.c \
		utils/ft_calloc.c \
		utils/ft_isalnum.c \
		utils/ft_isalpha.c \
		utils/ft_isascii.c \
		utils/ft_isdigit.c \
		utils/ft_isprint.c \
		utils/ft_itoa.c \
		utils/ft_lstadd_back.c \
		utils/ft_lstadd_front.c \
		utils/ft_lstclear.c \
		utils/ft_lstdelone.c \
		utils/ft_lstiter.c \
		utils/ft_lstlast.c \
		utils/ft_lstmap.c \
		utils/ft_lstnew.c \
		utils/ft_lstsize.c \
		utils/ft_memchr.c \
		utils/ft_memcmp.c \
		utils/ft_memcpy.c \
		utils/ft_memmove.c \
		utils/ft_memset.c \
		utils/ft_putchar_fd.c \
		utils/ft_putendl_fd.c \
		utils/ft_putnbr_fd.c \
		utils/ft_putstr_fd.c \
		utils/ft_split.c \
		utils/ft_strchr.c \
		utils/ft_strdup.c \
		utils/ft_striteri.c \
		utils/ft_strjoin.c \
		utils/ft_strlcat.c \
		utils/ft_strlcpy.c \
		utils/ft_strlen.c \
		utils/ft_strmapi.c \
		utils/ft_strncmp.c \
		utils/ft_strnstr.c \
		utils/ft_strrchr.c \
		utils/ft_strtrim.c \
		utils/ft_substr.c \
		utils/ft_tolower.c \
		utils/ft_toupper.c

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

