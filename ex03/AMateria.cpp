#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
	}
	return *this;
}

AMateria::~AMateria(void) {}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
