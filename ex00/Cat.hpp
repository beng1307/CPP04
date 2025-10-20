#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:

		Cat();
		Cat(const Cat &to_copy);
		Cat	&operator=(const Cat &to_copy);
		~Cat();

		void	makeSound(void) const;
};

#endif