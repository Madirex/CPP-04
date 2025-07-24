#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}

void	Cat::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->_brain->ideas[index] = idea;
}

std::string	Cat::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->_brain->ideas[index];
	return "";
}
