#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	std::string type;
public:
	Dog( void );
	Dog(const Dog &other);
	Dog& operator = (const Dog &other);
	std::string	getType(void) const;
	void	makeSound() const;
	~Dog();
};

#endif
