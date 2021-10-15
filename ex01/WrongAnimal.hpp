/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:09:25 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/12 17:09:26 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( WrongAnimal const &other );

		WrongAnimal	const &operator=( WrongAnimal const &other );

		virtual void	makeSound( void ) const;
		std::string		getType( void ) const;
};

#endif