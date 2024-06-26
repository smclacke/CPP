/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:46 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 19:49:58 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp" 
# include <iostream>

class Cat : public Animal
{		
	public:
		Cat();
		Cat(const Cat &copy);
		Cat	&operator=(const Cat &copy);
		~Cat();

	// methods
	void			makeSound() const;
};


#endif
