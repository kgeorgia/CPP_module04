#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		this->learn_buff[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &other )
{
	for (int i = 0; i < NUM_SLOTS; i++)
		this->learn_buff[i] = other.learn_buff[i];
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		if (this->learn_buff[i])
			delete this->learn_buff[i];
}

MateriaSource const &MateriaSource::operator=( MateriaSource const &other )
{
	for (int i = 0; i < NUM_SLOTS; i++)
		this->learn_buff[i] = other.learn_buff[i];
	return (*this);
}

void	MateriaSource::learnMateria( AMateria *m )
{
	int i = 0;
	for (;i < NUM_SLOTS && this->learn_buff[i]; i++);

	if (i < NUM_SLOTS)
		this->learn_buff[i] = m;
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < NUM_SLOTS && this->learn_buff[i]; i++)
		if (type == this->learn_buff[i]->getType())
			return (this->learn_buff[i]->clone());
	return (NULL);
}