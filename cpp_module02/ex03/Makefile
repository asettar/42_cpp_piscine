CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Fixed.hpp
SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = bsp

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@
%o : %c $(HEADERS)
	$(CC) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all