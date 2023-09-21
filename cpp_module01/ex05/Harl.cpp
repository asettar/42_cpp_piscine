#include "Harl.hpp"

Harl::Harl(void){
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
	std::cout << "I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}
void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I've been coming for years whereas you started working here since last month.\n\n";
}
void	Harl::error(void)
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unaCXXeptable!\n";
	std::cout << "I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	(void)level;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*fun_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int index = (level == levels[0]) + 2 * (level == levels[1])
				+ 3 * (level == levels[2]) + 4 * (level == levels[3]);
	if (index)
		(this->*fun_ptr[index - 1])();
}
