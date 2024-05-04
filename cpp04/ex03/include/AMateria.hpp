/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:45 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 23:34:15 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:

	public:
		AMateria(std::string const & type);


	// methods
	virtual AMateria	*clone() const = 0;
	virtual void use(ICharacter &target);
	
	// getters
	std::string const	&getType() const; //Returns the materia type
};


#endif
