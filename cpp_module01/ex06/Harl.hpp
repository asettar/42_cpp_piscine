#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	void	complain(std::string level);
public:
	Harl(void);
	void	complain(int index, std::string levels[]);
};

#endif