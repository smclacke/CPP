/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:45 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:04:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

// abstract class (not pure)
// don't create objects (class instance) from abstract class 
// so don't need copy assignment operator
class AMateria
{
	protected:
		const std::string	_type;

	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();


	// methods
	virtual AMateria		*clone() const = 0;
	virtual void			use(ICharacter &target);

	// getters
	virtual std::string const		&getType() const; //Returns the materia type
};


#endif
