/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:56 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/24 18:55:04 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"


Zombie::Zombie(){}
Zombie::~Zombie(){}


void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName()
{
	return (_name);
}

void	Zombie::announce()
{
	std::string		zomName;

	zomName = Zombie::getName();

	std::cout << zomName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::zombieMaking(std::string name)
{
	Zombie	makeMe;

	makeMe.setName(name);
	makeMe.announce();
	
}
