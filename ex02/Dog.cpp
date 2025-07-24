#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}

void	Dog::setIdea(int index, std::string idea)
{
	if (index >= 0 && index < 100)
		this->_brain->ideas[index] = idea;
}

std::string	Dog::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return this->_brain->ideas[index];
	return "";
}
