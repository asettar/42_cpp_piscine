#include "Contact.hpp"

class	PhoneBook
{
public :
	int number_of_contacts;
	Contact contacts[8];

	PhoneBook(void);
	void	add_contact(void);
	void	display_contacts(void);
	void	display_contact(int index);
	// void	search_contact(int index);

};



