#include "Cat.hpp"
#include <iostream>

Cat::Cat(): Animal("Cat"), brain(new Brain)
{
	std::cout << "A new cat is born!" << std::endl;
}

Cat::Cat(const Cat &to_copy) : Animal(to_copy)
{
	brain = new Brain(*to_copy.brain);
}

Cat	&Cat::operator=(const Cat &to_copy)
{
	if (this != &to_copy)
	{
		Animal::operator=(to_copy);
		*brain = *to_copy.brain;
	}
	return (*this);	
}

Cat::~Cat()
{
	delete brain;

	std::cout << "Cat class destroyed!" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miau!" << std::endl;
}

Brain	*Cat::access_brain()
{
	return (brain);
}