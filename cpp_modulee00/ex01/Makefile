CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Contact.hpp PhoneBook.hpp
SRCS = main.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $< -o $@
%o : %c $(HEADERS)
	$(CC) $(CPPFLAGS) -c $<
clean :
	rm -f megaphone.o
fclean : clean
	rm -f megaphone
re : fclean all