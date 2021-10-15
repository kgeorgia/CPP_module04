/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:30:38 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 16:53:52 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string const  &Name ): name(Name)
{
	for (int i = 0; i < NUM_SLOTS; i++)
		this->inventory[i] = NULL;
}

Character::Character( Character const &other )
{
	this->name = other.getName();
	for (int i = 0; i < NUM_SLOTS; i++)
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
}

Character::~Character()
{
	for (int i = 0; i < NUM_SLOTS; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

Character const &Character::operator=( Character const &other )
{
	this->name = other.getName();
	for (int i = 0; i < NUM_SLOTS; i++)
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
	return (*this);
}

std::string const &Character::getName( void ) const
{
	return (this->name);
}

void		Character::equip( AMateria *m)
{
	int i = 0;

	while (this->inventory[i] && i < NUM_SLOTS)
		i++;
	if (i < NUM_SLOTS)
		this->inventory[i] = m;
}

void		Character::unequip( int idx )
{
	if (idx >= 0 && idx < NUM_SLOTS)
		this->inventory[idx] = NULL;
}

void		Character::use( int idx, ICharacter &target )
{
	if (idx >= 0 && idx < NUM_SLOTS && this->inventory[idx])
		inventory[idx]->use(target);
}