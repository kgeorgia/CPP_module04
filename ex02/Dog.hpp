/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:53:43 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 16:55:49 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const &other );

		Dog	const &operator=( Dog const &other );

		void	makeSound( void ) const;
		Brain	*getBrain( void ) const;
};

#endif