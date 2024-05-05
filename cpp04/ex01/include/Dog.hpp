/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:16:01 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 16:13:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp" 
# include "Brain.hpp" 
# include <iostream>
# include <string>


class Dog : public AAnimal
{
	private:
		Brain*		_dogBrain;
	
	public:
		Dog();
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &copy);
		~Dog();

	// methods
	void			makeSound() const;

	// getters
	Brain			*getBrain() const;
};


#endif
