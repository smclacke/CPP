/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:56 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 00:48:33 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " created!" << std::endl;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << _name << " deleted!" << std::endl << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
