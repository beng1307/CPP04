#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat"), brain(new Brain)
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	delete brain;

	std::cout << "Cat class destroyed!" << std::endl;
}

Cat	&Cat::operator=(const Cat &to_copy)
{
	if (this != &to_copy)
		*brain = *to_copy.brain;
	return (*this);	
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

Brain	*Cat::access_brain()
{
	return (brain);
}