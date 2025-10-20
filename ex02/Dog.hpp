#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:

		Brain *brain;

	public:

		Dog();
		~Dog();
	
		void	makeSound(void) const;
		Brain	*access_brain();
};

#endif