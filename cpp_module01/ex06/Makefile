CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Harl.hpp
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = harlFilter

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@
%o : %c
	$(CC) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
