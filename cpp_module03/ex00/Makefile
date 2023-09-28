CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ClapTrap.hpp 
SRCS = main.cpp ClapTrap.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = fragTrap

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
