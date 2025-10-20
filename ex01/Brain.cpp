#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	std::cout << "Brain started to think!" << std::endl;
}

Brain::Brain(const Brain &to_copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = to_copy.ideas[i];
}

Brain &Brain::operator=(const Brain &to_copy)
{
	if (this != &to_copy)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = to_copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain class destroyed!" << std::endl;
}
