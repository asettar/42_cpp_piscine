#include "FragTrap.hpp"

FragTrap::FragTrap( void ) 
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator = (FragTrap const &other)
{
	std::cout << "FragTrap " << name << " copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " is requesting a positive high fives" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}
