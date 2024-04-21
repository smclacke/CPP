/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/21 21:19:18 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

// Default Constructor
ClapTrap::ClapTrap() : _name("Default name"), _hit(10), _energy(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Constructor creating new player
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit = 10;
	_energy = 10;
	_damage = 0;

	std::cout << "Constructor called" << std::endl;
	std::cout << "Player: " << _name << "enters the game..." << std::endl;
	std::cout << "Hit Points: " << _hit << std::endl; 
	std::cout << "Energy Points: " << _energy << std::endl; 
	std::cout << "Attack damage: " << _damage << std::endl; 
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
	_hit = value._hit;
	_energy = value._energy;
	_damage = value._damage;

	return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/**
 * when ClapTRap attacks it cause target to lose <attack damage> hit points
 * when ClapTrap repairs itself it gets <amount> hit points back
 * attacking and reparing cost 1 energy point each
 * nothing can happen if it has no hit points or energy points left
 * 
 * for each function, print message about what happened:
 * 	ClapTrap <name> attacks <target>, causing <damage> points of damage!
 */
	// void	attack(const std::string &target);
	// void	takeDamage(unsigned int amount);
	// void	beRepaired(unsigned int amount);
