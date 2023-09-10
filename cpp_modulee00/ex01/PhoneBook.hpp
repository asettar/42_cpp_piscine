#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	int number_of_contacts;
	int contact_position;
	Contact contacts[8];
	int		get_contact_index() const;
	bool	valid_index(std::string index) const;
public :

	PhoneBook(void);
	void	add_contact(void);
	void	display_contacts(void) const;

};

#endif