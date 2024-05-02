/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 17:12:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap() : ScavTrap("Default Chumpy"), FragTrap("Default Chumpy"), _name("Default Chumpy")
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name)
{
	_name = name;
	// ClapTrap::_name = name + "_clap_name";
	// _hitPoints = FragTrap::_hitPoints;
	// _energyPoints = 100;
	// _damage = 30;
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


void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << " ClapTrap name: " << ClapTrap::_name << std::endl;
}
