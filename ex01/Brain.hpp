/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgeorgia <kgeorgia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:42:58 by kgeorgia          #+#    #+#             */
/*   Updated: 2021/10/14 16:36:04 by kgeorgia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string		ideas[100];
		static int		nbRand;

	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const &other );

		Brain	const &operator=( Brain const &other );

		std::string		createIdea( void );
		void			printIdeas( void );
};

#endif