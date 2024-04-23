/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/23 23:03:06 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : _name("Default Chumpy"), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

// Constructor creating new player(s)
ClapTrap::ClapTrap(std::string &name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_damage = 0;

	std::cout << "Constructor called" << std::endl;
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



// Setter
// check best practice error handling this (unsigned cant be < 0 ...)
void	ClapTrap::setDamage(unsigned int amount)
{
	if (amount > 0)
		this->_damage = amount;		
	else
		this->_damage = 0;
}

// Getter
void	ClapTrap::getHitCount()
{
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit points" << std::endl;
}




void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no hit points left for attacking!" << std::endl;
	else if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no energy points left for attacking!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl; 
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < (int)amount)
		std::cout << "ClapTrap " << this->_name << " has no hit points left to take that hit..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << " leaving them with " << this->_hitPoints << " hit points left" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 1)
		std::cout << "ClapTrap " << this->_name << " has no energy points left to pay for repairs!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << "ClapTrap " << this->_name << " has been repaired with " << amount << " hit points, giving them " << this->_hitPoints << " hit points!" << std::endl;
	}
}

