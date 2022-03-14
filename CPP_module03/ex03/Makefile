SRCS	= main.cpp \
	  ClapTrap.cpp \
	  ScavTrap.cpp \
	  FragTrap.cpp \
	  DiamondTrap.cpp

HEADER	= ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp \
		DiamondTrap.hpp

NAME	= Diamonds

CC	= c++

CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

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

# -Wshadow:
# Warn whenever a local variable or type declaration shadows another variable, parameter, type, class member (in C++),
# or instance variable (in Objective-C) or whenever a built-in function is shadowed.
# Note that in C++, the compiler warns if a local variable shadows an explicit typedef, but not if it shadows a
# struct/class/enum. If this warning is enabled, it includes also all instances of local shadowing.

# This means that -Wno-shadow=local and -Wno-shadow=compatible-local are ignored when -Wshadow is used.
# Same as -Wshadow=global.

# -Wno-shadow-ivar (Objective-C only)
# Do not warn whenever a local variable shadows an instance variable in an Objective-C method.