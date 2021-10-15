/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:16 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 16:56:42 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog( Dog const &other )
{
	this->type = other.getType();
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog was deleted" << std::endl;
}

Dog const	&Dog::operator=( Dog const &other )
{
	type = other.getType();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof-woof" << std::endl;
}