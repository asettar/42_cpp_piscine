#include "Harl.hpp"

void	complain(Harl &h, int start, const std::string levels[])
{
	for(int i = start; i < 4; i++)
		h.complain(levels[i]);
}
int main(int ac, char **av)
{
	Harl h;

	if (ac != 2)
	{
		std::cerr << "Invalid number or argument.\n";
		return (1);
	}
	int pos = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (levels[i] == av[1])
			pos = i;
	}

	switch (pos)
	{
		case 0 :
		{
			complain(h, 0, levels);
			break ;
		}
		case 1 :
		{
			complain(h, 1, levels);
			break;
		}
		case 2 :
		{
			complain(h, 2, levels);
			break;
		}
		case 3 :
		{
			complain(h, 3, levels);
			break;
		}
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
