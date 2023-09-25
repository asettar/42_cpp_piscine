#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog Defaut constructor called\n";
	this->type = "Dog";
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy contructor called\n";
	*this = other;
}
Dog& Dog::operator = (const Dog &other)
{
	this->type = other.type;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog :: Haaawww Haaawww\n";
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
}