# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 12:31:11 by lbaron            #+#    #+#              #
#    Updated: 2022/11/03 12:31:13 by lbaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean all fclean re

objects=srcs/ft_putchar.o srcs/ft_swap.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o
files=libft.a $(objects)

all: libft.a

clean:
	-rm -f $(objects)

fclean:
	-rm -f $(files)

re: fclean all

libft.a: $(objects)
	ar rcs $@ $^

srcs/%.o: srcs/%.c
	gcc -Wall -Wextra -Werror $< -c -o $@ -I./includes
