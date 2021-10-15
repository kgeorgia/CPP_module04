/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:05:50 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 18:10:59 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::WrongCat( WrongCat const &other )
{
	this->type = other.getType();
	std::cout << "WrongCat was created" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat was deleted" << std::endl;
}

WrongCat const	&WrongCat::operator=( WrongCat const &other )
{
	type = other.getType();
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Wrong Meow-meow" << std::endl;
}