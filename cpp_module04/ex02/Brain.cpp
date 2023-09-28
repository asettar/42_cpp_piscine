#include "Brain.hpp"


Brain::Brain()
{
	for(int i = 0; i < size; i++)
		this->ideas[i] = "default";
}

Brain::Brain(std::string idea)
{
	for(int i = 0; i < size; i++)
		this->ideas[i] = idea;
}

Brain::Brain(const Brain &other)
{
	*this = other;
}
Brain& Brain::operator = (const Brain &other)
{
	for(int i = 0; i < size; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
}