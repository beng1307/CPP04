#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat"), brain(new Brain)
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	delete brain;

	std::cout << "Cat class destroyed!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}
