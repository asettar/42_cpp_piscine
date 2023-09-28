#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
private:
	Animal(const Animal &other);
	Animal& operator = (const Animal &other);
public:
	Animal( void );
	virtual void	makeSound() const = 0;
	virtual std::string	getType() const = 0;
	virtual ~Animal();
};

#endif
