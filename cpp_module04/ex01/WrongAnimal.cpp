#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal Defaut constructor called\n";
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy contructor called\n";
	*this = other;
}
WrongAnimal& WrongAnimal::operator = (const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wronganimal sound\n";
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called\n";
}