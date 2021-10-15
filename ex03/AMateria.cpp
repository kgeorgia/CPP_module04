#include "AMateria.hpp"

AMateria::AMateria( std::string const &type ): m_type(type) {}

std::string const &AMateria::getType( void ) const
{
	return (this->m_type);
}

void	AMateria::use( ICharacter &target )
{
	(void)target;
}