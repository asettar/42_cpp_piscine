CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Contact.hpp PhoneBook.hpp
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = stringreplace

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $^ -o $@
%.o : %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
