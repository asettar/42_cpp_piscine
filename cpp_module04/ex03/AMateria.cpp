#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "default";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other){
	(void)other;
}

AMateria& ::AMateria::operator = (const AMateria &other)
{
	(void)other;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

AMateria::~AMateria(void) {}


void	AMateria::use(ICharacter& target)
{

}
