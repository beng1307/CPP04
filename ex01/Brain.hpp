#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	protected:
	
		std::string	ideas[100];

	public:

		Brain();
		~Brain();

		void		add_idea(std::string idea);
		void		print_ideas();
};

#endif