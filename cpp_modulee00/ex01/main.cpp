#include "PhoneBook.hpp"

void	read_command(std::string &command)
{
	do
	{
		std::cout << "\n::::::::::Please enter one of the following commands::::::::::\n";
		std::cout << "\nEXIT\nADD\nSEARCH\n\n>";
		std::cin >> command;
	} while(command != "ADD" && command != "EXIT" && command != "SEARCH");
}
int	main(void)
{
	PhoneBook phb;
	while (true)
	{
		std::string command;
		read_command(command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			phb.add_contact();
		else if (command == "SEARCH")
		{
			phb.display_contacts();
		// 	int index;z
		// 	std::cin >> index;
			// phb.display_contact(index);
		}
	}
	
}
