#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat passed away!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}