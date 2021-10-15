/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:55:16 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 16:55:41 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::Dog( Dog const &other )
{
	if (other.brain)
		brain = new Brain(*other.brain);
	this->type = other.getType();
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "Dog was deleted" << std::endl;
}

Dog const	&Dog::operator=( Dog const &other )
{
	if (other.brain)
		brain = new Brain(*other.brain);
	type = other.getType();
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof-woof" << std::endl;
}

Brain		*Dog::getBrain( void ) const
{
	return (brain);
}