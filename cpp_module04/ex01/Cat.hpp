#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	std::string type;
	Brain *brain;
public:
	Cat( void );
	Cat(const Cat &other);
	Cat& operator = (const Cat &other);
	std::string getIdea(int i);
	void	setIdea(int i, std::string idea);
	std::string	getType(void) const;
	void	makeSound() const;
	~Cat();
};

#endif
