SRCS	= main.cpp \

NAME	= brainz

CC	= c++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	${OBJS}
			${CC} ${CPP_FLAGS} ${SRCS} -o ${NAME}

%.o :	%.cpp
	@${CC} ${CPP_FLAGS} -o $@ -c $<

all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re
