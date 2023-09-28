#include "Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog Defaut constructor called\n";
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy contructor called\n";
	*this = other;
}
Dog& Dog::operator = (const Dog &other)
{
	this->type = other.type;
	this->brain = new Brain();
	for(int i = 0; i < size; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog :: Haaawww Haaawww\n";
}
Dog::~Dog()
{
	std::cout << "Dog Destructor called\n";
	delete brain;
}