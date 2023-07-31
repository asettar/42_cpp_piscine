#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void):number_of_contacts(0){

};

void	PhoneBook::add_contact(void)
{
	Contact new_contact;
	new_contact.read_infos();
	int index = this->number_of_contacts % 8;
	this->contacts[index] = new_contact;
	if (this->number_of_contacts < 8)
		this->number_of_contacts++;
}


void	PhoneBook::display_contact(int index)
{
	if (index < 1 || index > this->number_of_contacts)
	{
		std::cout << "index is invalid\n";
		return ;
	}
	this->contacts[index].display_infos();
}
void	PhoneBook::display_contacts(void)
{
	for(int i = 0; i < this->number_of_contacts; i++)
		this->contacts[i].display_infos();

}
