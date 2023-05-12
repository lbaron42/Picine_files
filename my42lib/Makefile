# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 19:12:58 by lbaron            #+#    #+#              #
#    Updated: 2022/11/30 19:13:00 by lbaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= cc
CFLAGS= -Wall -Wextra -Werror

all: libtest.o

library42.o: library42.c library42.h
	$(CC) $(CFLAGS) -c library42.c

libtest.o: libtest.c library42.o
	$(CC) $(CFLAGS) -o $@ $^
