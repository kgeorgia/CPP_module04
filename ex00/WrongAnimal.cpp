/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:09:55 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 17:10:54 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("Nonetype")
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other ): type(other.getType())
{
	std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal was deleted" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=( WrongAnimal const &other )
{
	type = other.getType();
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string		WrongAnimal::getType( void ) const
{
	return (this->type);
}