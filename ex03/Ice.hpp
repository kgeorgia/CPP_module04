/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:33:40 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 15:51:01 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		~Ice() {}
		Ice( Ice const &other );

		Ice const &operator=( Ice const &other );

		AMateria *clone( void ) const;
		void use(ICharacter &target);
};

#endif