/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:45 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 16:58:03 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	protected:
		const std::string	_type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		AMateria	&AMateria::operator=(AMateria const &copy);
		virtual ~AMateria();


	// methods
	virtual AMateria		*clone() const = 0;
	virtual void			use(ICharacter &target);

	// getters
	std::string const		&getType() const; //Returns the materia type
};


#endif
