SRCS	= main.cpp \
		  AMateria.cpp \
		  Character.cpp \
		  Cure.cpp \
		  Ice.cpp \
		  MateriaSource.cpp

HEADER	= AMateria.hpp \
		  ICharacter.hpp \
		  Character.hpp \
		  Cure.hpp \
		  Ice.hpp \
		  IMateriaSource.hpp \
		  MateriaSource.hpp

NAME	= materials

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
