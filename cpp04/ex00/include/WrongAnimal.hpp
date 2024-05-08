/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:49:39 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/08 19:45:32 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

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
	// add virtual if we want to overwrite this function with a WrongCat makeSound() function, otherwise this one is always called
	void			makeSound() const;

	// getters
	virtual std::string		getType() const;
};


#endif
