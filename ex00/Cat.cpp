/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:54:52 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 16:55:14 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	this->type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

Cat::Cat( Cat const &other )
{
	this->type = other.getType();
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat was deleted" << std::endl;
}

Cat const	&Cat::operator=( Cat const &other )
{
	type = other.getType();
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow-meow" << std::endl;
}