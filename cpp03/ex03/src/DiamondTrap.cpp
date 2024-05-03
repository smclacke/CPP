/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:53 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:03:13 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

// Default Constructor
DiamondTrap::DiamondTrap()
{
	this->_name = "Default Mondy";
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << std::endl << "DiamondTrap Default Constructor called" << std::endl;
	std::cout << this->_name << " enters the game..." << std::endl;
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "Attack damage: " << this->_damage << std::endl << std::endl;
}

// Constructor with parameter
DiamondTrap::DiamondTrap(std::string &name)
{
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << std::endl << "DiamondTrap Constructor called" << std::endl;
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

void	DiamondTrap::whoAmI()
{
	std::cout << std::endl << "DiamondTrap name: " << this->_name << " ClapTrap name: " << this->getName() << std::endl << std::endl;
}

void	DiamondTrap::privateName()
{
	std::cout << "DiamondTrap private attribute name stays " << this->_name << std::endl;
}