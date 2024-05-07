/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:44:57 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 13:12:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class ICharacter;

// concrete class, can/must be instantiated
class Cure : public AMateria
{
	private:
		std::string		_type;

	public:
		Cure();
		Cure(Cure const &copy);
		Cure	&operator=(const Cure &copy);
		~Cure();

	// methods
	Cure	*clone() const;	
	void	use(ICharacter &target);

	// getters
	std::string const	&getType() const;
	
};

#endif
