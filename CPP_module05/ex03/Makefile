SRCS	= main.cpp \
		  Bureaucrat.cpp \
		  AForm.cpp \
		  ShrubberyCreationForm.cpp \
		  RobotomyRequestForm.cpp \
		  PresidentialPardonForm.cpp \
		  Intern.cpp

HEADER	= ./header/Bureaucrat.hpp \
		  ./header/AForm.hpp \
		  ./header/ShrubberyCreationForm.hpp \
		  ./header/RobotomyRequestForm.hpp \
		  ./header/PresidentialPardonForm.hpp \
		  ./header/Intern.hpp

NAME	= bureaucrat

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
