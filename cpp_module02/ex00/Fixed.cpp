#include "Fixed.hpp"

Fixed::Fixed(void) : Fixed_point(0){
	std::cout << "Default constructor called\n";
}


Fixed::Fixed(Fixed const &other){
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator = (Fixed const &other)
{
	std::cout << "Copy assignement operator called\n";
	this->Fixed_point = other.Fixed_point;
	return (*this);
}


int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->Fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->Fixed_point = raw;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
