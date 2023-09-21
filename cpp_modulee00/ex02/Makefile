CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = ACXXount.hpp 
SRCS = tests.cpp  ACXXount.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = aCXXounts

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
