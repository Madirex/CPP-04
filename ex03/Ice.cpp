#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &other) : AMateria(other) {}

Ice& Ice::operator=(const Ice &other)
{
	(void)other;
	return *this;
}

Ice::~Ice(void) {}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
