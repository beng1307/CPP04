#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private:

		Brain *brain;

	public:

		Cat();
		Cat(const Cat &to_copy);
		Cat	&operator=(const Cat &to_copy);
		~Cat();

		void	makeSound(void) const;
		Brain	*access_brain();
};

#endif
