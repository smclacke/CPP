/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:10:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:15:30 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class Animal
{
	protected:
		std::string		_type;
		
	public:
		Animal();
		Animal(const Animal &copy);
		Animal	&operator=(const Animal &copy);
		virtual ~Animal();
	
	// methods
	virtual void			makeSound() const;
	
	// getters
	virtual std::string		getType() const;
};


#endif
