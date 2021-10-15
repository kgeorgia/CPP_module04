/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:56 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 15:51:33 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice( Ice const &other ): AMateria(other.getType()) {}

Ice const	&Ice::operator=( Ice const &other )
{
	(void)other;
	return (*this);
}

AMateria	*Ice::clone( void ) const
{
	AMateria *ret = new Ice();
	return (ret);
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}