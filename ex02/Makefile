NAME		= fragtrap
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
RM			= rm -rf

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re