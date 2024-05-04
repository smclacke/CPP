/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:10:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:47:22 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "../include/Brain.hpp"
# include <iostream>
# include <string>

// abstract class
class AAnimal
{
	protected:
		std::string		_type;
		
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal	&operator=(const AAnimal &copy);
		virtual ~AAnimal();

	// methods
	virtual void			makeSound() const = 0;
	
	// getters
	virtual std::string		getType() const;
	virtual	Brain			*getBrain() const = 0;
};

	// pure virtual function / abstract function 

#endif
