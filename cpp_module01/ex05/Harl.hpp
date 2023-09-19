#include <iostream>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

public:
	Harl(void);
	void	complain(std::string level);
	void	display(std::string s){
		std::cout <<s << std::endl;
	}
};
