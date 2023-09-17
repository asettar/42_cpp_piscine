#include "Fixed.hpp"

Fixed::Fixed(void) : Fixed_point(0){
	std::cout << "Default constructor called\n";
}


Fixed::Fixed(Fixed const &other){
	*this = other;
}

Fixed& Fixed::operator = (Fixed const &other)
{
	if (this != &other)
	{
		this->Fixed_point = other.Fixed_point;
	}
	return (*this);
}


int	Fixed::getRawBits(void) const
{
	return (this->Fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->Fixed_point = raw;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
