#include "Fixed.hpp"

Fixed::Fixed(void) : Fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	this->Fixed_point = n << fractional_bits;
}
Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
	this->Fixed_point = roundf(n * (1 << fractional_bits));
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

float Fixed::toFloat(void) const
{
	float res = Fixed_point / (float)(1 << fractional_bits);
	return (res);
}

int	Fixed::toInt(void) const
{
	return (Fixed_point >> fractional_bits);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}
std::ostream& operator<<(std::ostream& os, const Fixed & F)
{
	os << F.toFloat();
	return os;
}

