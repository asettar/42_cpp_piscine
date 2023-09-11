CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp
SRCS = main.cpp  HumanA.cpp HumanB.cpp Weapon.cpp
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