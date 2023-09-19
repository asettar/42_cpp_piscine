#include "Fixed.hpp"

int main(){
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	a = Fixed(30.3f);
	Fixed c(30.2f);
	if (a > c)
		std::cout << "a is greater than c\n";
	if (c <= a)
		std::cout << "c is less than a\n";
	if (c != a)
		std::cout << "a is different than c\n";
	c = Fixed(30.3f);
	if (c == a)
		std::cout << "c is equal to a\n";
}
