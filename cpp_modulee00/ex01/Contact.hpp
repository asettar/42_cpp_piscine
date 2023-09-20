#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <ctype.h>

class	Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkest_secret;
	std::string	print_string(std::string s) const;
	void	read_first_name(void);
	void	read_last_name(void);
	void	read_nick_name(void);
	void	read_phone_number(void);
	void	read_darkest_secret(void);

public:
	void	read_infos(void);
	void	display_contact_infos(int index) const;
	void	print_contact_fields(void) const;
};

#endif