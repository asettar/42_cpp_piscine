#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}
void	Zombie::annouce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::~Zombie()
{
	std::cout << name << ": Destructor called\n";
}
