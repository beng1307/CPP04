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

void	Brain::add_idea(std::string idea)
{
	int index = 0;

	while (index < 100 && !ideas[index].empty())
		index++;
	if (index < 100)
		ideas[index] = idea;
}

void	Brain::print_ideas()
{
	for (int i = 0; i < 100 && !ideas[i].empty(); i++)
		std::cout << ideas[i] << std::endl;	
}
