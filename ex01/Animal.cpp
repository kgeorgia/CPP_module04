/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:47 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 16:46:48 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("Nonetype")
{
	std::cout << "Animal was created" << std::endl;
}

Animal::Animal( Animal const &other ): type(other.getType())
{
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal was deleted" << std::endl;
}

Animal const	&Animal::operator=( Animal const &other )
{
	type = other.getType();
	return (*this);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal sound" << std::endl;
}

std::string		Animal::getType( void ) const
{
	return (this->type);
}