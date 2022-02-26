SRCS	= megaphone.cpp

NAME	= megaphone

CC	= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

.c.o:

$(NAME):	${OBJS}
			${CC} ${CPP_FLAGS} ${OBJS} -o ${NAME}

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re
