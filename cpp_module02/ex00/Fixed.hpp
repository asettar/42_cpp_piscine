#include <iostream>

class Fixed
{
private:
	static const int	fractional_bits;
	int			Fixed_point;
public:
	Fixed(void);
	Fixed(Fixed const &other);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	Fixed& operator=(Fixed const &other);
	~Fixed(void);
};