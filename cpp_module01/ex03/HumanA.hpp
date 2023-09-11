#include "Weapon.hpp"

class HumanA
{
private :
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	// HumanB(std::string name);
	void	attack();
};