#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(int i = 1; av[i]; i++)
		{
			std::string s = av[i];
			for(int j=0; j < (int)s.size(); j++)
				std::cout << (char)std::toupper(s[j]);
		}
	}
}
