CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Account.hpp 
SRCS = tests.cpp  Account.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = accounts

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@
%.o : %.cpp $(HEADERS)
	$(CC) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
