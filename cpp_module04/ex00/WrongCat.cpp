#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat Defaut constructor called\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat Copy contructor called\n";
	*this = other;
}
WrongCat& WrongCat::operator = (const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat :: Meeeeooooow Meeeoow\n";
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called\n";
}