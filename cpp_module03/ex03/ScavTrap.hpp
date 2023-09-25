#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	ScavTrap& operator = (ScavTrap const &other);
	void	guardGate();
	~ScavTrap();
};
