/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:10:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:23:20 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "../include/Brain.hpp"
# include <iostream>
# include <string>

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
	virtual	Brain			*getBrain() const = 0;
};

	// what is this magic???
	// adding getBrain to use in animal class but by the dog/cat classes
	// so set to 0, doesn't do anything except exist, the methods in 
	// dog/cat classes do the stuff, amaziinngggg

#endif
