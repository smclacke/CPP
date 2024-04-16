/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/HumanA.hpp"

// ---- constructor ---- //
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	_name = name;
}

// ---- destructor ---- //
HumanA::~HumanA(){}


void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
