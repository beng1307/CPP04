#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal
{
	protected:

		std::string	type;

	public:

		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();

		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif
