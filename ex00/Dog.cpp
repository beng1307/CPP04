#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "A new doggo is born!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Doggo class destroyed!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff!" << std::endl;
}