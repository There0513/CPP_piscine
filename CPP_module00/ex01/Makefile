SRCS	= main.cpp \
	  PhoneBook.cpp \
	  Contact.cpp

HEADER	= PhoneBook.hpp \
	  Contact.hpp

NAME	= phonebook

CC	= clang++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98

OBJS	= ${SRCS:.cpp=.o}
#OBJS	= ${SRCS:.cpp=.o}
#.cpp.o:
		#@${CC} ${CPP_FLAGS} ${HEADER} -c $< -o $@
#		@${CC} ${CPP_FLAGS} ${HEADER} -c $< -o ${<:.cpp=.o}

$(NAME):	${OBJS} ${HEADER}
			${CC} ${CPP_FLAGS} ${SRCS} -o ${NAME}
			#${CC} ${CPP_FLAGS} ${OBJS} -o ${NAME}

%.o :	%.cpp
	@${CC} ${CPP_FLAGS} -o $@ -c $<
##	@${CC} ${CPP_FLAGS} ${SRCS} -o ${NAME}
#	@${CC} ${CPP_FLAGS} ${HEADER} -c $< -o $@


all:		${NAME}

clean:
	rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:
		all clean fclean re
