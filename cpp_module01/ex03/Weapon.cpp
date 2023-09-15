#include "Weapon.hpp"


Weapon::Weapon(std::string type_name){
	this->type = type_name;
}
	
const std::string& Weapon::getType()
{
	const std::string &type_ref = this->type;
	return (type_ref);
}
void Weapon::setType(std::string type_name)
{
	this->type = type_name;
}
