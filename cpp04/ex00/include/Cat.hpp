/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:46 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:44:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp" 
# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class Cat : public Animal
{
	private:
		std::string		_type;
				
	public:
		Cat();
		Cat(const Cat &copy);
		Cat	&operator=(const Cat &copy);
		~Cat();

	std::string		getType() const;
	void			makeSound() const;
};


#endif