/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:54:52 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 16:07:43 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat( Cat const &other )
{
	if (other.brain)
		this->brain = new Brain(*other.brain);
	this->type = other.getType();
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat( void )
{
	delete brain;
	std::cout << "Cat was deleted" << std::endl;
}

Cat const	&Cat::operator=( Cat const &other )
{
	if (other.brain)
		this->brain = new Brain(*other.brain);
	type = other.getType();
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow-meow" << std::endl;
}

Brain		*Cat::getBrain( void ) const
{
	return (brain);
}