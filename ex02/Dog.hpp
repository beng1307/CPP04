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
		Dog(const Dog &to_copy);
		Dog	&operator=(const Dog &to_copy);
		~Dog();
	
		void	makeSound(void) const;
		Brain	*access_brain();
};

#endif