/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:46:08 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 17:31:45 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure( Cure const &other ): AMateria(other.getType()) {}

Cure const	&Cure::operator=( Cure const &other )
{
	(void)other;
	return (*this);
}

AMateria	*Cure::clone( void ) const
{
	AMateria *ret = new Cure();
	return (ret);
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}