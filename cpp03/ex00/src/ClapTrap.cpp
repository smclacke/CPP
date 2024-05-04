/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 15:09:59 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : _name("Default Chumpy"), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl; 
}

// Constructor with parameter
ClapTrap::ClapTrap(std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _damage(0)
{
	std::cout << std::endl << "ClapTrap Constructor called" << std::endl;
	std::cout << this->_name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl; 
	std::cout << "Energy Points: " << this->_energyPoints << std::endl; 
	std::cout << "Attack damage: " << this->_damage << std::endl << std::endl; 
}

// Copy Constructor (shallow copy)
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

// Ccopy assignment operator (deep copy)
ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_damage = copy._damage;
	}
	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}




void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints < 1)
		std::cout << this->_name << " has no hit points left for attacking!" << std::endl;
	else if (this->_energyPoints < 1)
		std::cout << this->_name << " has no energy points left for attacking!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl; 
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < (int)amount)
		std::cout << this->_name << " has no hit points left to take that hit..." << std::endl;
	else
	{
		this->_hitPoints -= amount;
		std::cout << this->_name << " takes " << amount << " points of damage" << " leaving them with " << this->_hitPoints << " hit points left" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 1)
		std::cout << this->_name << " has no energy points left to pay for repairs!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << this->_name << " has been repaired with " << amount << " hit points, giving them " << this->_hitPoints << " hit points!" << std::endl;
	}
}



// Setters
void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setDamage(unsigned int amount)
{
	this->_damage = amount;		
}


// Getters
std::string	ClapTrap::getName()
{
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints()
{
	std::cout << this->_name << " has " << this->_hitPoints << " hit points" << std::endl;
	return this->_hitPoints;
}

unsigned int	ClapTrap::getEnergyPoints()
{
	std::cout << this->_name << " has " << this->_energyPoints << " energy points" << std::endl;
	return this->_energyPoints;
}

unsigned int	ClapTrap::getDamageAmount()
{
	std::cout << this->_name << " causes " << this->_damage << " amount of damage" << std::endl;
	return this->_damage;
}
