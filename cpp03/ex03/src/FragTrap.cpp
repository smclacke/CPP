/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 14:52:07 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 15:51:53 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap()
{
	this->_name = "Default Frag";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

// Constructor with parameter
FragTrap::FragTrap(std::string &name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damage = 30;
	std::cout << std::endl << "FragTrap Constructor called" << std::endl;
	std::cout << this->_name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_damage << std::endl << std::endl;
}

// Copy Constructor (shallow copy)
FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	*this = copy;
}

// Copy assignment operator (deep copy)
FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	if (this != &copy)
		ClapTrap::operator=(copy);
	return *this;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


// Methods
void	FragTrap::highFivesGuys()
{
	if (this->_energyPoints <= 0)
		std::cout << this->_name << " doesn't have enough energy for high fives!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " is requesting a high five!!" << std::endl;
	}
}
