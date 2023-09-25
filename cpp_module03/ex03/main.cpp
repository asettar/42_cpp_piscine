#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ScavTrap a("Vlad");
	// ScavTrap b(a);
	// a.attack("Jhin");
	// a.beRepaired(2);
	// a.takeDamage(20);
	// a.guardGate();
	// b.attack("Lucian");
	// b.guardGate();
	// a.takeDamage(120);
	// a.beRepaired(10);
	// a.attack("Lucian");

	FragTrap d("Jinx");
	d.attack("Lucian");
	d.takeDamage(40);
	d.beRepaired(20);
	d.highFivesGuys();
}
