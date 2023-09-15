#include "Harl.hpp"

int main()
{
	Harl h;	

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i=0; i<4; i++)
		h.complain(levels[i]);
		
	// void (Harl::*fun_ptr)(std::string)=&Harl::display;
	// (h.*fun_ptr)("achraf");
}