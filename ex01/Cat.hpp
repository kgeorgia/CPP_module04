/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:46:49 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 16:06:15 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const &other );

		Cat	const &operator=( Cat const &other );

		void	makeSound( void ) const;
		Brain	*getBrain( void ) const;
};

#endif