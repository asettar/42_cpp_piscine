#include <iostream>


class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string name);
	void	annouce( void );
	Zombie* newZombie( std::string name );
	void	randomChump( std::string name );
	~Zombie();
};