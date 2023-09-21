#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl h;

	if (ac != 2)
	{
		std::cerr << "Invalid number or argument.\n";
		return (1);
	}
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int pos = (av[1] == levels[0]) + 2 * (av[1] == levels[1])
				+ 3 * (av[1] == levels[2]) + 4 * (av[1] == levels[3]);

	switch (pos)
	{
		case 1 :
		{
			h.complain(0, levels);
			break ;
		}
		case 2 :
		{
			h.complain(1, levels);
			break;
		}
		case 3 :
		{
			h.complain(2, levels);
			break;
		}
		case 4 :
		{
			h.complain(3, levels);
			break;
		}
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
