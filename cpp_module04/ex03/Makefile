CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = Cure.hpp Ice.hpp AMateria.hpp ICharacter.hpp \
			IMateriaSource.hpp MateriaSource.hpp Character.hpp
SRCS = main.cpp Cure.cpp Ice.cpp AMateria.cpp  MateriaSource.cpp Character.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = amateria

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
