/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:10 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>

class	Weapon
{
	private:
		std::string		_type;

	public:
		Weapon(std::string type);
		~Weapon();

		const std::string 		&getType();
		void					setType(std::string type);
};


#endif
