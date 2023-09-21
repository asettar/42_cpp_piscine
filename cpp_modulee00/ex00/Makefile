CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = megaphone


all : $(NAME)
$(NAME) : megaphone.o
	$(CXX) $(CPPFLAGS) $< -o $@
megaphone.o : megaphone.cpp
	$(CXX) $(CPPFLAGS) -c megaphone.cpp
clean :
	rm -f megaphone.o
fclean : clean
	rm -f megaphone
re : fclean all
.PHONY : all clean fclean re
