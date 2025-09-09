#include "Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal(): 
{
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

void	Animal::makeSound(void)
{
	if (type == "Cat")
		std::cout << "Miau!" << std::endl;
	else if (type == "Dog")
		std::cout << "Wuff!" << std::endl;
	else
		std::cout << "What does the Fox say?" << std::endl;
}