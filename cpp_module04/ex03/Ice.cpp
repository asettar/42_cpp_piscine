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
	(void)other;
	return (*this);
}

AMateria* Ice::clone(void) const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *\n";
}

Ice::~Ice(void)
{
}
