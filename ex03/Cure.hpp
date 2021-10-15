/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:45:58 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 15:48:56 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure() {}
		Cure( Cure const &other );

		Cure const &operator=( Cure const &other );

		AMateria *clone( void ) const;
		void use(ICharacter &target);
};

#endif