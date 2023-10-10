#include "Character.hpp"


Character::Character(void) : name("character")
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}
Character::Character(const Character &other)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = other;
}

Character & Character::operator = (const Character &other)
{
	for(int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = other.inventory[i];
	}
	name = other.name;
	return (*this);
}

void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break ;
		}
	}
}

std::string const & Character::getName(void) const
{
	return (name);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || inventory[idx] == NULL)
	{
		return ;
		std::cout <<"llll\n";
	}
	inventory[idx]->use(target);
}
Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		delete inventory[i];
		inventory[i] = NULL;
	}
}