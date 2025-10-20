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

Animal::Animal(const Animal &to_copy)
{
	type = to_copy.type;
}

Animal &Animal::operator=(const Animal &to_copy)
{
	if (this != &to_copy)
	{
		type = to_copy.type;
	}
	return (*this);
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