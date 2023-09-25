#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat Defaut constructor called\n";
	this->type = "Cat";
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy contructor called\n";
	*this = other;
}
Cat& Cat::operator = (const Cat &other)
{
	this->type = other.type;
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Cat :: Meeeeooooow Meeeoow\n";
}
Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
}