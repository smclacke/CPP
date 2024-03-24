/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/24 18:57:34 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <cctype>
# include <iomanip>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie();
		~Zombie();

	void			setName(std::string name);
	std::string		getName();
	void			zombieMaking(std::string name);

	void			announce();
	Zombie*			newZombie(std::string name);
	void			randomChump(std::string name);
	
};


#endif