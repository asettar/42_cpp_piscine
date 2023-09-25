CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = FragTrap

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $^ -o $@
%.o : %.cpp $(HEADERS)
	$(CXX) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
