#include "PhoneBook.hpp"

void	read_command(std::string &command)
{
	do
	{
		std::cout << "Please enter one of the following command\n";
		std::cout << "EXIT\nADD\nSEARCH\n\n";
		std::cout << ">";
		std::cin >> command;
	} while(command != "ADD" && command != "EXIT" && command != "SEARCH");
}

int	main()
{
	std::string command;
	PhoneBook phb;
	while (true)
	{
		read_command(command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			phb.add_contact();
		else if (command == "SEARCH")
		{
			phb.display_contacts();
			int index;
			std::cin >> index;
			phb.display_contact(index);
		}
	}
	
}
