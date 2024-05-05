/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:27:32 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:30:21 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource();
		
		// methods
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria 	*createMateria(std::string const &type) = 0;
	
};


#endif
