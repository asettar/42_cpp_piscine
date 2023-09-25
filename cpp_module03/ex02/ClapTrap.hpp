#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string name;
	long long	hitPoints;
	long long	energyPoints;
	long long	attackDamage;
	
public :
	ClapTrap( void );
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	ClapTrap& operator = (ClapTrap const &other);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif
