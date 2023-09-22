#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int	fractional_bits = 8;
	int			Fixed_point;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(Fixed const &other);
	int 	getRawBits(void) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed&	operator=(Fixed const &other);
	Fixed&	max(Fixed const &a, Fixed const &b);
	~Fixed(void);
};

std::ostream& operator<<(std::ostream& os, const Fixed & F);
#endif
