SRCS 	= main.c

OBJS 	= ${SRCS:.c=.o}

NAME	= philo

INCLUDE	= ../includes/philo.h

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o:		%.c ${INCLUDE}
			${CC} ${CFLAGS} -o $@ -c $< -I${INCLUDE}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:		
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
