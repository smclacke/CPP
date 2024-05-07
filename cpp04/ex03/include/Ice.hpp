/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:22:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 14:06:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class ICharacter;

// concrete class, can/must be instantiated
class Ice : public AMateria
{
	private:
		std::string		_type;
		
	public:
		Ice();
		Ice(const Ice &scopy);
		Ice		&operator=(const Ice &copy);
		~Ice();

	// methods
	Ice					*clone() const;
	void				use(ICharacter &target);

	//getters
	std::string const	&getType() const;
	
};


#endif
