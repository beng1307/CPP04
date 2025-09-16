#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	std::cout << "Brain started to think!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain class destroyed!" << std::endl;
}

void	Brain::add_idea(std::string &idea)
{
	int index = 0;

	while (index < 100 && !ideas[index].empty())
		index++;
	if (index < 100)
		ideas[index] = idea;
}
