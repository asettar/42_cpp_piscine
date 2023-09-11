#include "Contact.hpp"

void	Contact::read_first_name(void)
{
	std::cout << "Enter contact first name: ";
	if (!getline(std::cin, firstName))
		exit(1);

}
void	Contact::read_last_name(void)
{
	std::cout << "Enter contact last name: ";
	if (!getline(std::cin, lastName))
		exit(1);

}
void	Contact::read_nick_name(void)
{
	std::cout << "Enter contact nick name: ";
	if (!getline(std::cin, nickName))
		exit(1);

}
void	Contact::read_phone_number(void)
{
	std::cout << "Enter contact phone number: ";
	if (!getline(std::cin, phoneNumber))
		exit(1);

}
void	Contact::read_darkest_secret(void)
{
	std::cout << "Enter contact darkest secret: ";
	if (!getline(std::cin, darkest_secret))
		exit(1);

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
