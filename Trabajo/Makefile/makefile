SRCS	= main.c fct.c

OBJS	= ${SRCS:.c=.o}

NAME	= hello

CC		= cc
RM		= rm -f
CFLAGS = -Wall -g

.c.o:
		${CC} ${FLAGS} -c $< -o {<:.c=.o}

${NAME}:	${OBJS}
		${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re