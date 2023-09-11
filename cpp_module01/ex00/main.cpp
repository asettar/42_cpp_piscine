#include "Zombie.hpp"

int main()
{
	Zombie zombie("Foo");
	zombie.annouce();
	zombie.randomChump("Boo");
	Zombie *zom = zombie.newZombie("Coo");
	zom->annouce();
	delete zom;
}