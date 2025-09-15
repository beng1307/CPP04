#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	
	meta->makeSound();


	delete meta;
	delete i;
	delete j;

	return (0);
}