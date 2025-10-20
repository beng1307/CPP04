#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "A new cat is born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &to_copy) : WrongAnimal(to_copy)
{
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &to_copy)
{
	if (this != &to_copy)
		WrongAnimal::operator=(to_copy);
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "A cat passed away!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << " Wrong cat Miau!" << std::endl;
}