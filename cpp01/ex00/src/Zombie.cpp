/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:56 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/24 17:11:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"


Zombie::Zombie(){}
Zombie::~Zombie(){}

void	Zombie::announce()
{
	std::string	zomName;
	
	// get name _name
	zomName = "NameofZom";

	// print name
	std::cout << zomName << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}
