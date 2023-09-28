#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Animal *animals[10];
	// for(int i = 0; i < 5; i++)
	// 	animals[i] = new Cat();
	// for(int i = 5; i < 10; i++)
	// 	animals[i] = new Dog();
	
	// for(int i = 0; i < 10; i++)
	// 	delete animals[i];

	// // test deep copy
	// Cat cat_a;
	// Cat cat_b = cat_a;
	// cat_a.setIdea(0, "changed");
	// std::cout << cat_a.getIdea(0) << std::endl;
	// std::cout << cat_b.getIdea(0) << std::endl;

	Animal *a, *b;
	a = new Cat;
	a->makeSound();
	b = new Dog();
	b->makeSound();
	std::cout << a->getType() << std::endl;
	std::cout << b->getType() << std::endl;
	delete a;
	delete b;
}