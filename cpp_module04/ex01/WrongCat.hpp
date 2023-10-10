#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	std::string type;
public:
	WrongCat( void );
	WrongCat(const WrongCat &other);
	WrongCat& operator = (const WrongCat &other);
	std::string	getType(void) const;
	void	makeSound() const;
	~WrongCat();
};

#endif
