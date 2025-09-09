#include "Cat.hpp"
#include <iostream>

Cat::Cat(): type("Cat")
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat passed away!" << std::endl;
}
