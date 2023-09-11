#include <iostream>


class Zombie
{
private:
	std::string name;
public:
	Zombie();
	void	set_name(std::string name);
	void	annouce( void );
	Zombie* zombieHorde( int N, std::string name );
};