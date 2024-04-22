/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/22 18:27:47 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : _name("Default Chumpy"), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	std::cout << _name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl; 
	std::cout << "Energy Points: " << _energyPoints << std::endl; 
	std::cout << "Attack damage: " << _damage << std::endl << std::endl; 
}

// Constructor creating new player(s)
ClapTrap::ClapTrap(std::string &name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_damage = 0;

	std::cout << "Constructor called" << std::endl << std::endl;
	std::cout << _name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hitPoints << std::endl; 
	std::cout << "Energy Points: " << _energyPoints << std::endl; 
	std::cout << "Attack damage: " << _damage << std::endl << std::endl; 
}

// Copy Constructor
ClapTrap::ClapTrap(const ClapTrap &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

// Deep copy using copy operator
ClapTrap	&ClapTrap::operator=(const ClapTrap &value)
{
	_name = value._name;
	_hitPoints = value._hitPoints;
	_energyPoints = value._energyPoints;
	_damage = value._damage;

	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


// get and set damage amount for each ClapTrap

/**
 * when ClapTRap attacks it cause target to lose <attack damage> hit points
 * when ClapTrap repairs itself it gets <amount> hit points back
 * attacking and reparing cost 1 energy point each
 * nothing can happen if it has no hit points or energy points left
 * 
 * for each function, print message about what happened:
 * 	ClapTrap <name> attacks <target>, causing <damage> points of damage!
 */

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints < 1)
		std::cout << "No hit points left for attacking!" << std::endl;
	else if (this->_energyPoints < 1)
		std::cout << "No energy points left for attacking!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl; 
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < (int)amount)
		std::cout << "No hit points left to take that hit..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage" << " leaving them with " << _hitPoints << " hit points left" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 1)
		std::cout << "No energy points left to pay for repairs!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " has been repaired " << amount << " amount, giving them " << _hitPoints << " hit points!" << std::endl;
	}
}

