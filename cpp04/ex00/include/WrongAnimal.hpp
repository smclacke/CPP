/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:49:39 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:15:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class WrongAnimal
{
	protected:
		std::string		_type;
		
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal	&operator=(const WrongAnimal &copy);
		virtual ~WrongAnimal();

	// methods
	virtual void			makeSound() const;

	// getters
	virtual std::string		getType() const;
};


#endif
