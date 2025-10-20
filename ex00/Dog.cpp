#include "Dog.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog")
{
	std::cout << "A new doggo is born!" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	return ;
}

Dog &Dog::operator=(const Dog &to_copy)
{
	if (this != &to_copy)
		Animal::operator=(to_copy);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Doggo class destroyed!" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff!" << std::endl;
}