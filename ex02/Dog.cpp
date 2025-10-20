#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(): Animal("Dog"), brain(new Brain)
{
	std::cout << "A new doggo is born!" << std::endl;
}

Dog::Dog(const Dog &to_copy) : Animal(to_copy)
{
	brain = new Brain(*to_copy.brain);
}

Dog	&Dog::operator=(const Dog &to_copy)
{
	if (this != &to_copy)
	{
		Animal::operator=(to_copy);
		*brain = *to_copy.brain;
	}
	return (*this);	
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

Brain	*Dog::access_brain()
{
	return (brain);
}
