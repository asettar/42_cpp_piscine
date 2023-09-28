#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

const int size = 100;

class Brain
{
private:

public:
	std::string ideas[size];
	Brain();
	Brain(std::string idea);
	Brain(const Brain &other);
	Brain& operator = (const Brain &other);
	~Brain();
};

#endif
