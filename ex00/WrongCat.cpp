#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "A new cat is born!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "A cat passed away!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << " Wrong cat Miau!" << std::endl;
}