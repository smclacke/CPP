/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:44:57 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:05:17 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

// concrete class, can/must be instantiated
class Cure : public AMateria
{
	private:
		std::string		_type;

	public:
		Cure();
		Cure(const Cure &copy);
		Cure	&operator=(const Cure &copy);
		~Cure();

	// methods
	Cure	*clone() const;	
	void	use(ICharacter &target);

	// getters
	std::string const	&getType() const;
	
};

#endif
