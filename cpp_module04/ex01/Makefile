CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp WrongCat.hpp WrongAnimal.hpp
SRCS = main.cpp Dog.cpp Cat.cpp Animal.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = brain

all : $(NAME)
$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) $^ -o $@
%.o : %.cpp $(HEADERS)
	$(CXX) $(CPPFLAGS) -c $< -o $@
clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re
