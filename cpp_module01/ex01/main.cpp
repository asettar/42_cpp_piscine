#include "Zombie.hpp"

int main(){
	Zombie zombie;
	int N = 10;
	std::string s = "Foo";
	Zombie *zombies = zombie.zombieHorde(N, s);
	for(int i=0; i<N; i++)
	{
		std::cout << i << ": ";
		zombies[i].annouce();
	}
	delete[] zombies;
}