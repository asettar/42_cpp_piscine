CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone


all : $(NAME)
$(NAME) : megaphone.o
	$(CC) $(CPPFLAGS) $< -o $@
megaphone.o : megaphone.cpp
	$(CC) $(CPPFLAGS) -c megaphone.cpp
clean :
	rm -f megaphone.o
fclean : clean
	rm -f megaphone
re : fclean all
