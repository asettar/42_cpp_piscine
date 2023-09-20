CC = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Contact.hpp PhoneBook.hpp
SRCS = main.cpp PhoneBook.cpp Contact.cpp read_contact_fields.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = phonebook

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
