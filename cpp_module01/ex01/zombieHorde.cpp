#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie *zombie_ptr = new Zombie[N];
	if (!zombie_ptr)
		return (NULL);
	for(int i = 0; i < N; i++)
		zombie_ptr[i].set_name(name);
	return zombie_ptr;
}

Zombie::Zombie(){

}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
void	Zombie::annouce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
