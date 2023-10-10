#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = other;
}

MateriaSource & MateriaSource::operator = (const MateriaSource &other)
{
	for(int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = other.inventory[i];
	}
	return (*this);
}


void	MateriaSource::learnMateria(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break;
		}
	}
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}
