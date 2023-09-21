#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL){
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}


void	HumanB::attack()
{
	if (!weapon)
	{
		std::cerr << "No Weapon to attack with\n";
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;

}

