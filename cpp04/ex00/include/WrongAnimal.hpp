/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:49:39 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/08 15:50:26 by smclacke      ########   odam.nl         */
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
	void			makeSound() const;

	// getters
	virtual std::string		getType() const;
};


#endif
