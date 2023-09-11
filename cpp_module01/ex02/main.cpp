#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &str_ref = str;     // any change made to str_ref will affect str and vice versa

	std::cout << &str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &str_ref << std::endl;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << str_ref << std::endl;
}
