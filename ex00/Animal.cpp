#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(): type("Animal")
{
	std::cout << "Animal created" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal class destroyed" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sounds!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}