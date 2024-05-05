/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:16:00 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 16:36:47 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

// pure abstract class / interface (no source file, no function implementations)

class ICharacter
{
	protected:
		const std::string	_name;

	public:
		virtual ~ICharacter() {}
		
		//methods
		virtual void 				equip(AMateria *materia) = 0;
		virtual void 				unequip(int i) = 0;
		virtual void				use(int i, ICharacter &target) = 0;
		
		// getters
		virtual std::string const 	&getName() const = 0;
};


#endif
