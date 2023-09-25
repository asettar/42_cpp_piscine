#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string type;
public:
	Cat( void );
	Cat(const Cat &other);
	Cat& operator = (const Cat &other);
	std::string	getType(void) const;
	void	makeSound() const;
	~Cat();
};

#endif
