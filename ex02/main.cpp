#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int	main(void)
{
	Animal	*animals[4] = {new Cat(), new Cat(), new Dog(), new Dog()};

	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();
	animals[3]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animals[i];
}
