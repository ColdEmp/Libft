# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cglanvil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/28 12:47:14 by cglanvil          #+#    #+#              #
#    Updated: 2019/05/30 14:23:15 by cglanvil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =	ft_atoi.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c	\
		ft_range.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_strrev.c \
		ft_swap.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strstr.c \
		ft_strncmp.c \
		ft_strupcase.c \
		ft_strlowcase.c \
		ft_strcapitalize.c \
		ft_strdup.c \
		ft_itoa.c \
		ft_strnstr.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_bzero.c
all:
	gcc -c -Wall -Wextra -Werror $(FILES)
	ar -rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
