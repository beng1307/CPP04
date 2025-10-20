#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat")
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	return ;
}

Cat &Cat::operator=(const Cat &to_copy)
{
	if (this != &to_copy)
		Animal::operator=(to_copy);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat class destroyed!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}