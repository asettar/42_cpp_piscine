#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) 
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &other)
{
	std::cout << "ScavTrap " << name << " copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gate Keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}
