#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):number_of_contacts(0), contact_position(0){

};

void	PhoneBook::add_contact(void)
{
	Contact new_contact;
	new_contact.read_infos();
	contacts[contact_position] = new_contact;
	contact_position = (contact_position + 1) % 8;
	if (number_of_contacts < 8)
		number_of_contacts++;
}
bool	PhoneBook::valid_index(std::string index) const
{
	if (index.size() != 1 || !isdigit(index[0]))
		return false;
	int ind = index[0] - '0';
	return (ind >= 1 && ind <= number_of_contacts);
}

int	PhoneBook::get_contact_index() const
{
	std::string index;
	std::cout << "\nPrint the index of a contact: ";
	if (!getline(std::cin, index))
		exit(1);
	if (!valid_index(index))
	{
		std::cerr << "Index is not valid.\n";
		std::cerr << "the index must contain only one digit with no trailing zeros and between 1 and " << number_of_contacts << ".\n";
		return (-1);
	}
	return (index[0] - '0' - 1);
}

void	PhoneBook::display_contacts(void) const
{
	if (!number_of_contacts)
	{
		std::cout << "There is no contacs yet.\n";
		return ;
	}
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nick name" << "\n\n";
	for(int i = 0; i < number_of_contacts; i++)
		contacts[i].display_contact_infos(i + 1);
	int contact_index = get_contact_index();
	if (contact_index != -1)
		contacts[contact_index].print_contact_fields();
}
