CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = brain


all : $(NAME)
$(NAME) : main.o
	$(CXX) $(CPPFLAGS) $< -o $@
%.o : %.cpp
	$(CXX) $(CPPFLAGS) -c main.cpp
clean :
	rm -f main.o
fclean : clean
	rm -f brain
re : fclean all
.PHONY : all clean fclean re
