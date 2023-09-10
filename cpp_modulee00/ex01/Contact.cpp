#include "Contact.hpp"

void	Contact::print_contact_fields(void) const
{
	std::cout << "first name : " << firstName << std::endl;
	std::cout << " last name : " << lastName << std::endl;
	std::cout << " nick name : " << nickName << std::endl;
	std::cout << " phone number : " << phoneNumber << std::endl;
	std::cout << " darkest secret : " << darkest_secret << std::endl;
}

std::string	Contact::print_string(std::string s) const
{
	if (s.size() > 10)
	{
		s.resize(10);
		s[9] = '.';
	}
	return s;
}
void	Contact::display_contact_infos(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << print_string(firstName) << "|";
	std::cout << std::setw(10) << print_string(lastName) << "|";
	std::cout << std::setw(10) << print_string(nickName) << "\n";
}
