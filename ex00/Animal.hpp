#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:

		std::string	type;

	public:

		Animal();
		Animal(std::string type);
		Animal(const Animal &to_copy);
		Animal	&operator=(const Animal &to_copy);
		virtual ~Animal();

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
