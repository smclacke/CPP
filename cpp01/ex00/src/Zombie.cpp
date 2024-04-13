/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:56 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 01:04:35 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

// ---- constructor ---- //
Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " created!" << std::endl;
}

// ---- destructor ---- //
Zombie::~Zombie()
{
	std::cout << _name << " deleted!" << std::endl << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
