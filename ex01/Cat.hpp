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
		~Cat();

		Cat		&operator=(const Cat &to_copy);
		void	makeSound(void) const;
		Brain	*access_brain();
};

#endif
