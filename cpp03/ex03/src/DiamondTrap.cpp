/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 15:10:58 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap()
{
	_name = "Default Chumpy";
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "DiamondTrap Constructor called" << std::endl;
	std::cout << _name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _damage << std::endl << std::endl;
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &value)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = value;
}

// Deep copy using copy operator
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &value)
{
	_name = value._name;
	_hitPoints = value._hitPoints;
	_energyPoints = value._energyPoints;
	_damage = value._damage;

	return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
