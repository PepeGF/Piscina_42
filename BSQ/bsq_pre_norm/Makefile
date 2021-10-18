# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josgarci <josgarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:52:42 by dpenas-u          #+#    #+#              #
#    Updated: 2021/08/26 14:31:45 by josgarci         ###   ########.fr        #
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
