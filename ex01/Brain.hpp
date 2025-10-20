#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
	
		std::string	ideas[100];

	public:

		Brain();
		Brain(const Brain &to_copy);
		Brain	&operator=(const Brain &to_copy);
		~Brain();

	void		add_idea(std::string idea);
	void		print_ideas();
};

#endif