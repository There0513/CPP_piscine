SRCS	= main.cpp \
	  AAnimal.cpp \
	  Dog.cpp \
	  Cat.cpp \
	  Brain.cpp

HEADER	= AAnimal.hpp \
		Dog.hpp \
		Cat.hpp \
	  	Brain.hpp

NAME	= my_intelligent_animals

CC	= c++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}

$(NAME):	${OBJS} ${HEADER}
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
