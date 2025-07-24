#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._learnedMaterias[i])
			this->_learnedMaterias[i] = other._learnedMaterias[i]->clone();
		else
			this->_learnedMaterias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_learnedMaterias[i];
			if (other._learnedMaterias[i])
				this->_learnedMaterias[i] = other._learnedMaterias[i]->clone();
			else
				this->_learnedMaterias[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_learnedMaterias[i];
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_learnedMaterias[i])
		{
			this->_learnedMaterias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnedMaterias[i] && this->_learnedMaterias[i]->getType() == type)
		{
			return this->_learnedMaterias[i]->clone();
		}
	}
	return NULL;
}
