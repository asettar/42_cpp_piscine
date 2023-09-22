#include "ClapTrap.hpp"

int main()
{
	ClapTrap c("Jhin");
	c.attack("Lucian");
	c.takeDamage(5);
	c.beRepaired(2);
	for(int i = 0; i < 9; i++)
		c.attack("Lucian");
	c.beRepaired(2);
	ClapTrap d = c;
	d.attack("Lucain");
	ClapTrap b(d);
	b.attack("Lucian");
}
