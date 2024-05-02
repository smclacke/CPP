/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 13:53:24 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 15:03:03 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

// Default Constructor
ScavTrap::ScavTrap() 
{
	_name = "Default Chumpy";
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

// Constructor for new ClapTraps, hitpoints present health of ClapTrap
ScavTrap::ScavTrap(std::string &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
	std::cout << _name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _damage << std::endl << std::endl;
}

// Copy Constructor
ScavTrap::ScavTrap(const ScavTrap &value)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = value;
}

// Deep copy using copy operator
ScavTrap	&ScavTrap::operator=(const ScavTrap &value)
{
	_name = value._name;
	_hitPoints = value._hitPoints;
	_energyPoints = value._energyPoints;
	_damage = value._damage;

	return *this;
}

// Destuctor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}



void	ScavTrap::guardGate()
{
	if (_hitPoints <= 0)
		std::cout << _name << " can't be in Gate keeper mode, no hitPoints left!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " can't be in Gate keeper mode, no energyPoints left!" << std::endl;
	else
		std::cout << _name << " is in Gate keeper mode" << std::endl;
}
