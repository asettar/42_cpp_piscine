#include "Fixed.hpp"

Fixed::Fixed(void) : Fixed_point(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called\n";
	this->Fixed_point = n << fractional_bits;
}
Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called\n";
	this->Fixed_point = roundf(n * (1 << fractional_bits));
}

Fixed::Fixed(Fixed const &other){
	// std::cout << "Copy constructor called\n";
	*this = other;
}


int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return (this->Fixed_point);
}


void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->Fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	float res = Fixed_point / (float)(1 << fractional_bits);
	std::cout << Fixed_point << ' ' << res <<'\n';
	return (res);
}

int	Fixed::toInt(void) const
{
	return (Fixed_point >> fractional_bits);
}


Fixed& Fixed::operator = (Fixed const &other){
	// std::cout << "Copy assignement operator called\n";
	this->Fixed_point = other.Fixed_point;
	return (*this);
}


bool	Fixed::operator < (Fixed const &a){
	return (Fixed_point < a.Fixed_point);
}

bool	Fixed::operator > (Fixed const &a){
	return (Fixed_point > a.Fixed_point);
}

bool	Fixed::operator >= (Fixed const &a){
	return (Fixed_point >= a.Fixed_point);
}

bool	Fixed::operator <= (Fixed const &a){
	return (Fixed_point <= a.Fixed_point);
}

bool	Fixed::operator == (Fixed const &a){
	return (Fixed_point == a.Fixed_point);
}

bool	Fixed::operator != (Fixed const &a){
	return (Fixed_point != a.Fixed_point);
}

int	Fixed::operator + (Fixed const &a){
	return (Fixed_point + a.Fixed_point);
}

int	Fixed::operator - (Fixed const &a){
	return (Fixed_point - a.Fixed_point);
}

float	Fixed::operator * (Fixed const &a){
	float f1 = Fixed_point / (float)(1 << fractional_bits);
	float f2 = a.Fixed_point / (float)(1 << fractional_bits);
	return (f1 * f2);
}

int	Fixed::operator / (Fixed const &a){
	return (Fixed_point / a.Fixed_point);
}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b){
	if (a.Fixed_point >= b.Fixed_point)
		return (a);
	return (b);
}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b){
	if (a.Fixed_point <= b.Fixed_point)
		return (a);
	return (b);
}

Fixed	Fixed::operator ++ (void){
	++Fixed_point;
	return (*this);
}

Fixed	Fixed::operator ++ (int){
	Fixed copy = *this;
	Fixed_point++;
	return copy;
}

Fixed	Fixed::operator -- (void){
	--Fixed_point;
	return (*this);
}

Fixed	Fixed::operator -- (int){
	Fixed copy = *this;
	Fixed_point--;
	return copy;
}


int& Fixed::max(int &fp1, int &fp2){
	if (fp1 >= fp2)
		return fp1;
	return (fp2);
}

int& Fixed::min(int &fp1, int &fp2){
	if (fp1 <= fp2)
		return fp1;
	return (fp2);
}

Fixed::~Fixed(void){
	// std::cout << "Destructor called\n";
}


std::ostream& operator<<(std::ostream& os, const Fixed & F)
{
	os << F.toFloat();
	return os;
}

