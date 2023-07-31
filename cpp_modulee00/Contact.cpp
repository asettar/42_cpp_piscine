#include "Contact.hpp"

void	Contact::read_infos(void)
{
	
	std::cout << "enter contact first name please.\n";
	std::cin >> this->firstName;
	std ::cout << "Enter contact last name please.\n";
	std::cin >> this->lastName;
	std::cout << "Enter contact nickname.\n";
	std::cin >> this->nickName;
	std::cout << "Enter contact phone number.\n";
	std::cin >> this->phoneNumber;
	std::cout << "Enter contact darkest secret.\n";
	std::cin >> this->darkest_secret;
}

void	Contact::display_infos(void) const
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickName << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkest_secret << std::endl;
}
