/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:16:01 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:44:42 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp" 
# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class Dog : public Animal
{
	private:
		std::string		_type;
		
	public:
		Dog();
		Dog(const Dog &copy);
		Dog	&operator=(const Dog &copy);
		~Dog();

	std::string		getType() const;
	void			makeSound() const;
};


#endif
