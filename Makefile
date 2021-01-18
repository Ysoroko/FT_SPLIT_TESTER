# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 19:44:45 by ysoroko           #+#    #+#              #
#    Updated: 2021/01/18 12:37:32 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

SRC 			=	../*.c \
					ft_compare_results.c \
					ft_mem_count.c \
					ft_my_split.c \
					ft_print.c \
					ft_run_test.c \
					main.c \

AND				=	&&

LAUNCH			=	./a.out 



all:		run

run:	
			$(CC) $(FLAGS) $(SRC) $(AND) $(LAUNCH)

log:		a.out
			$(LAUNCH)

clean:
			rm a.out

re:			clean run
			
.PHONY:		all clean log run
