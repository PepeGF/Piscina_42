# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 17:52:42 by dpenas-u          #+#    #+#              #
#    Updated: 2021/08/25 20:20:55 by albgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c read_ops.c first_line.c utils.c corners.c calcs.c sq_ops.c ft_putstr.c check_map.c check_header_map.c check_lines_map.c check_lines_map2.c check_header_map2.c free_things.c

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

NAME	= bsq

RM		= rm -f

${NAME}:
		${CC} ${CFLAGS} ${SRCS} -I bsq_header.h -o ${NAME}

all:		${NAME}

fclean:		
			${RM} ${NAME}

.PHONY:		all fclean 
