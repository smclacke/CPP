/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 02:18:11 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/HumanB.hpp"

// ---- constructor ---- //
HumanB::HumanB(std::string name) : _weapon(NULL) // init the ptr
{
	_name = name;
}

// ---- destructor ---- //
HumanB::~HumanB(){}

// ---- setter ---- //
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if(_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is unarmed!" << std::endl;
}
