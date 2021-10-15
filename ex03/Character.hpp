/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:18:22 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 16:45:59 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define NUM_SLOTS 4

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];

	public:
		Character( std::string const &Name = "Noname" );
		Character( Character const &other );
		~Character();

		Character const &operator=( Character const &other );

		std::string const &getName( void ) const;
		void equip( AMateria *m );
		void unequip( int idx );
		void use( int idx, ICharacter &target );
};

#endif