/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:50:11 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:51:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class WrongCat : public WrongAnimal
{
	private:
		std::string		_type;
		
	public:
		WrongCat();
		WrongCat(const WrongCat &copy);
		WrongCat	&operator=(const WrongCat &copy);
		~WrongCat();

	std::string		getType() const;
	void			makeSound() const;
};


#endif
