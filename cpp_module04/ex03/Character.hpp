#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private :
	AMateria* inventory[4];
	std::string name;
public :
	Character(void);
	Character(std::string name);
	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character(void);
};



#endif