/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:16:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:20:17 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

// interface/ pure abstract class, doesn't need to be instantiated
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		
	//methods
	virtual void 			equip(AMateria *materia) = 0;
	virtual void 			unequip(int i) = 0;
	virtual void			use(int i, ICharacter &target) = 0;
	
	// getters
	virtual std::string const 	&getName() const = 0;
};


#endif
