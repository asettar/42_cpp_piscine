#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal Defaut constructor called\n";
	this->type = "Animal";
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy contructor called\n";
	*this = other;
}
Animal& Animal::operator = (const Animal &other)
{
	this->type = other.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "animal sound\n";
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}
