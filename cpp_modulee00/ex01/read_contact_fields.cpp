#include "Contact.hpp"

void	Contact::read_first_name(void)
{
	std::cout << "Enter contact first name: ";
	std::cin >> firstName;
}
void	Contact::read_last_name(void)
{
	std::cout << "Enter contact last name: ";
	std::cin >> lastName;
}
void	Contact::read_nick_name(void)
{
	std::cout << "Enter contact nick name: ";
	std::cin >> nickName;
}
void	Contact::read_phone_number(void)
{
	std::cout << "Enter contact phone number: ";
	std::cin >> phoneNumber;
}
void	Contact::read_darkest_secret(void)
{
	std::cout << "Enter contact darkest secret: ";
	std::cin >> darkest_secret;
}

void	Contact::read_infos(void)
{
	std::cout << "-----Please enter the new contact infos:-------\n";
	read_first_name();
	read_last_name();
	read_nick_name();
	read_phone_number();
	read_darkest_secret();
}
