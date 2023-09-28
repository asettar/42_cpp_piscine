#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "default";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

// void	AMateria::use(ICharacter& target)
// {

// }
