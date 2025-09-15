#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal()
{
	std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destroyed" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sounds!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}