/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:46 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 18:59:20 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp" 
# include <iostream>
# include <string>

class Cat : public Animal
{
	private:
		Brain*		_catBrain;
	
	public:
		Cat();
		Cat(const Cat &copy);
		Cat	&operator=(const Cat &copy);
		~Cat();

	void			makeSound() const;
	Brain			*getBrain() const;
};


#endif
