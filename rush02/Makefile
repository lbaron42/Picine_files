# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandt <dbrandt@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 15:38:31 by lbaron            #+#    #+#              #
#    Updated: 2022/10/30 17:51:11 by dbrandt          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
flags= -Wall -Werror -Wextra -c

all: rush

rush: main.o ft_get_word.o ft_parse_dict.o ft_av1_parse.o
	$(CC) main.o ft_get_word.o ft_parse_dict.o ft_av1_parse.o -o rush-02

main.o: main.c
	$(CC) $(flags) main.c
	
ft_get_word.o: ft_get_word.c
	$(CC) $(flags) ft_get_word.c
	
ft_parse_dict.o: ft_parse_dict.c
	$(CC) $(flags) ft_parse_dict.c

ft_av1_parse.o: ft_av1_parse.c
	$(CC) $(flags) ft_av1_parse.c

fclean:
	rm *.o rush-02
