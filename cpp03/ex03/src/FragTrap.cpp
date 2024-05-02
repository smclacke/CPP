/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 14:52:07 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 15:03:09 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap()
{
	_name = "Default Chumpy";
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string &name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_damage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
	std::cout << _name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl;
	std::cout << "Energy Points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _damage << std::endl << std::endl;
}

// Copy Constructor
FragTrap::FragTrap(const FragTrap &value)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = value;
}

// Deep copy using copy operator
FragTrap	&FragTrap::operator=(const FragTrap &value)
{
	_name = value._name;
	_hitPoints = value._hitPoints;
	_energyPoints = value._energyPoints;
	_damage = value._damage;

	return *this;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}



void	FragTrap::highFivesGuys()
{
	std::cout << _name << " is requesting a high five!!" << std::endl;
}
