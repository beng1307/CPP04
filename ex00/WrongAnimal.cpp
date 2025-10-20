#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(): type("Wrong Animal")
{
	std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): type(type)
{
	std::cout << "Wrong Animal created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &to_copy)
{
	type = to_copy.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &to_copy)
{
	if (this != &to_copy)
	{
		type = to_copy.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal class destroyed" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sounds!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}