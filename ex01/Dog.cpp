#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog"), brain(new Brain)
{
	std::cout << "A new doggo is born!" << std::endl;
}

Dog::~Dog()
{
	delete brain;

	std::cout << "Doggo class destroyed!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff!" << std::endl;
}