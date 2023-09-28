#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat Defaut constructor called\n";
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy contructor called\n";
	*this = other;
}
Cat& Cat::operator = (const Cat &other)
{
	this->type = other.type;
	this->brain = new Brain();
	for(int i = 0; i < size; i++)
		this->brain->ideas[i] = other.brain->ideas[i];
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Cat :: Meeeeooooow Meeeoow\n";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called\n";
	delete brain;
}

std::string	Cat::getIdea(int i){
	if (i < size)
		return (this->brain->ideas[i]);
	return "";
}

void	Cat::setIdea(int i, std::string idea){
	if (i < size)
		this->brain->ideas[i] = idea;
}
