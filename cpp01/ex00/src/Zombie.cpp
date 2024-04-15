/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:56 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/15 12:56:02 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

// ---- constructor ---- //
Zombie::Zombie(std::string name)
{
	_name = name;
}

// ---- destructor ---- //
Zombie::~Zombie()
{
	std::cout << _name << " deleted!" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
