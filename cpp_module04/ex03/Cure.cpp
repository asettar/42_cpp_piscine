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
	this->type = other.type;
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
