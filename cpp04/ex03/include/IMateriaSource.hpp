/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:27:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:05:43 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

// interface/ pure abstract class, doesn't need to be instantiated
// MateriaSource inherits and impliments these functions from this interface
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		
		// methods
		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria 	*createMateria(const std::string &type) = 0;
	
};


#endif
