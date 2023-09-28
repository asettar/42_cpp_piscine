#include "Animal.hpp"

Animal::Animal( void )
{
}

Animal& Animal::operator = (const Animal &other)
{
	(void)other;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called\n";
}
