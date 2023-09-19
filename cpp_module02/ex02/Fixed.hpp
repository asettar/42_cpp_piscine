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
	Fixed&	operator = (Fixed const &other);
	bool	operator < (Fixed const &a);
	bool	operator > (Fixed const &a);
	bool	operator >= (Fixed const &a);
	bool	operator <= (Fixed const &a);
	bool	operator == (Fixed const &a);
	bool	operator != (Fixed const &a);
	int		operator + (Fixed const &a);
	int		operator - (Fixed const &a);
	float	operator * (Fixed const &a);
	int		operator / (Fixed const &a);
	Fixed	operator ++ (void);
	Fixed	operator ++ (int);
	Fixed	operator -- (void);
	Fixed	operator -- (int);
	// int		operator / (Fixed const &a);
	// int		operator / (Fixed const &a);
	static Fixed const&	max(Fixed const &a, Fixed const &b);
	static Fixed const& min(Fixed const &a, Fixed const &b);
	static int& max(int &fp1, int &fp2);
	static int& min(int &fp1, int &fp2);

	~Fixed(void);
};

std::ostream& operator<<(std::ostream& os, const Fixed & F);
