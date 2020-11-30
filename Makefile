# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 19:44:45 by ysoroko           #+#    #+#              #
#    Updated: 2020/11/28 19:44:45 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

SRC 			=	ft_split.c \
					ft_compare_results.c \
					ft_mem_count.c \
					ft_my_split.c \
					ft_print.c \
					ft_run_test.c \
					main.c \

AND				=	&&

LAUNCH			=	./a.out 



all:		compile

compile:	
			$(CC) $(FLAGS) $(SRC)

results:	a.out
			$(LAUNCH)

clean:
			rm a.out

re:			clean compile results
			
.PHONY:		all clean compile results re

