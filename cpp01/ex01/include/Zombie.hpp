/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 00:53:22 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:23:26 by smclacke      ########   odam.nl         */
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
		void	announce(void);
		void	setName(std::string name);
};

Zombie*		zombieHorde(int n, std::string name);

#endif