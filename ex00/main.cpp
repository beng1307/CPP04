#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void)
{

///////////////////////////////////////////////////////////////////////////////

	std::cout << "\033[32m" << ":::Correct Animal Tests:::" << "\033[0m" << std::endl;

	Animal *animals[3] = {new Animal(), new Dog(), new Cat()};

	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "What does the " << animals[i]->getType() << " say?" << std::endl;
		std::cout << animals[i]->getType() << " goes "; animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
		delete animals[i];

	std::cout << std::endl;

///////////////////////////////////////////////////////////////////////////////

	std::cout << "\033[32m" << ":::Wrong Animal Tests:::" << "\033[0m" << std::endl;

	WrongAnimal	*wrong_animal = new	WrongCat();

	std::cout << std::endl;

	std::cout << "What does the " << wrong_animal->getType() << " say?" << std::endl;
	std::cout << wrong_animal->getType() << " goes "; wrong_animal->makeSound();

	std::cout << std::endl;

	delete wrong_animal;

}
