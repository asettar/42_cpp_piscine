#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{
}
Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure& Cure::operator = (const Cure &other)
{
	(void)other;
	return (*this);
}


AMateria* Cure::clone(void) const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: \"* heals " << target.getName() << " wounds *\n";
}

Cure::~Cure(void)
{
}
