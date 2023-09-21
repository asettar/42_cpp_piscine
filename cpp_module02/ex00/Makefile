CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Zombie.hpp
SRCS = main.cpp Fixed.cpp 
OBJS = $(SRCS:.cpp=.o)
NAME = fixedpoint

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