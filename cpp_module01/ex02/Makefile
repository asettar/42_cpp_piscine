CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brain


all : $(NAME)
$(NAME) : main.o
	$(CC) $(CPPFLAGS) $< -o $@
%.o : %.c
	$(CC) $(CPPFLAGS) -c main.cpp
clean :
	rm -f main.o
fclean : clean
	rm -f brain
re : fclean all