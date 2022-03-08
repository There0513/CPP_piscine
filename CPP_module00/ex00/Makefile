SRCS	= ./megaphone.cpp

NAME	= megaphone

CC	= c++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.c=.o}

.c.o:

$(NAME):	${OBJS}
			${CC} ${CPP_FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	rm -rf ${NAME}

fclean:		clean

re:		fclean all

.PHONY:
		all clean fclean re
