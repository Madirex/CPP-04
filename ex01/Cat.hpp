#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(const Cat &other);
		Cat& operator=(const Cat &other);
		~Cat(void);

		virtual void	makeSound(void) const;
		void			setIdea(int index, std::string idea);
		std::string		getIdea(int index) const;
};

#endif
