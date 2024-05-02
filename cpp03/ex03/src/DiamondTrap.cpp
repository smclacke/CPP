/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 19:20:10 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap()
{
	this->_name = "Default Chumpy";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap Constructor called" << std::endl;
	std::cout << this->_name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_damage << std::endl << std::endl;
}

// Copy Constructor
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	*this = copy;
}

// Deep copy using copy operator
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
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
	std::cout << "DiamondTrap name: " << this->_name << " | ClapTrap name: " << ClapTrap::_name << std::endl;
}