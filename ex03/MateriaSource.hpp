/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:02:02 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/15 17:27:18 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

# define NUM_SLOTS 4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *learn_buff[4];

	public:
		MateriaSource();
		MateriaSource( MateriaSource const &other );
		~MateriaSource();

		MateriaSource const &operator=( MateriaSource const &other );

		void learnMateria( AMateria *m );
		AMateria* createMateria(std::string const & type);
};

#endif