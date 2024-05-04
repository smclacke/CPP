/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 13:53:24 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 19:28:34 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

// Default Constructor
ScavTrap::ScavTrap()
{
	this->_name = "Default Scavvy";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damage = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

// Constructor with parameter
ScavTrap::ScavTrap(std::string &name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
	std::cout << this->_name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_damage << std::endl << std::endl;
}

// Copy Constructor  
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	*this = copy;
}

// Copy assignment operator  
ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

// Destuctor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}


// Methods
void	ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " can't be in Gate keeper mode, no hitPoints left!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " can't be in Gate keeper mode, no energyPoints left!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " is in Gate keeper mode" << std::endl;
	}
}
