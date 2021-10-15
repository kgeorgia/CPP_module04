/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:27:56 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 17:29:37 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string m_type;

	public:
		AMateria( std::string const &type = "AMateria" );
		virtual ~AMateria() {}

		std::string const &getType( void ) const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif