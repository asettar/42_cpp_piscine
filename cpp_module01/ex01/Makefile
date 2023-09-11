CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Zombie.hpp
SRCS = main.cpp  zombieHorde.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = zombie

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