# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lorodrig <lorodrig@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 14:32:49 by lorodrig          #+#    #+#              #
#    Updated: 2021/08/26 14:32:59 by lorodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= main.c map_management.c processing.c square_algorithm.c \
	string_aux.c validation.c

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= bsq

RM		= rm -f

${NAME}:
		${CC} ${CFLAGS} ${SRCS} -I bsq_library.h -o ${NAME}

all:		${NAME}

clean:
			rm -f *.o

fclean:		clean
			${RM} ${NAME}
re:			fclean all

.PHONY:		all fclean clean re
