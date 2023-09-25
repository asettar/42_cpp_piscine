#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal( void );
	Animal(const Animal &other);
	Animal& operator = (const Animal &other);
	virtual std::string	getType() const;
	virtual void	makeSound() const;
	virtual ~Animal();
};

#endif
