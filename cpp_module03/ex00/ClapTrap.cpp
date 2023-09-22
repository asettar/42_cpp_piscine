#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 10;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator = (ClapTrap const &other)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}


void	ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0 || !energyPoints)
	{
		std::cout << "ClapTrap " << name << " can't attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage" << std::endl;
	hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0 || !energyPoints)
	{
		std::cout << "ClapTrap " << name << " can't repair" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " repaired " << amount << " hit points" << std::endl;
	hitPoints += amount;
	energyPoints--;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
