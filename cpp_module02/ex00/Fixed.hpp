#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	static const int	fractional_bits = 8;
	int			Fixed_point;
public:
	Fixed(void);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	Fixed(Fixed const &other);
	Fixed& operator=(Fixed const &other);
	~Fixed(void);
};

#endif