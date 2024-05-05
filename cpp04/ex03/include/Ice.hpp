/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:22:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 16:32:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		std::string		_type;
		
	public:
		Ice();
		Ice(Ice const *ref);
		Ice		&Ice::operator=(Ice const &copy);
		~Ice();

	// methods
	Ice					*clone() const;
	void				use(ICharater &target);

	//getters
	std::string const	&getType() const;
	
};


#endif
