#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
}
Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice& Ice::operator = (const Ice &other)
{
	this->type = other.type;
}

AMateria* Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target.getName() <<  " *\n";
}

Ice::~Ice(void)
{
}
