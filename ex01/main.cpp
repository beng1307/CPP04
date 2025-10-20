#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int	main(void)
{

///////////////////////////////////////////////////////////////////////////////

	std::cout << "\033[32m" << ":::Standart Test:::" << "\033[0m" << std::endl;

	Animal	*animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "What does the " << animals[i]->getType() << " say?" << std::endl;
		std::cout << animals[i]->getType() << " goes "; animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl;

///////////////////////////////////////////////////////////////////////////////

	std::cout << "\033[32m" << ":::Deep Copy Test:::" << "\033[0m" << std::endl;

	Cat	catI;
	Cat	catII;

	catII = catI;

	std::cout << std::endl;

	catI.access_brain()->add_idea("Hello");

	std::cout << "First Cat: " << std::endl; 
	catI.access_brain()->print_ideas();

	std::cout << std::endl;

	std::cout << "Second Cat: ";
	catII.access_brain()->print_ideas();

	std::cout << std::endl;
}
