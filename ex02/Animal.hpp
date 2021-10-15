/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:07:50 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 17:40:48 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( Animal const &other );

		Animal	const &operator=( Animal const &other );

		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;
};

#endif