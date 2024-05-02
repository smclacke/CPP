/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:54:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 14:27:11 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// inherit the constructors and destructor from ClapTrap
// constructors and destructor and attack() will print different messages
// con/dest chaining must be shown in tests
// when scavtrap is created, program starts by building claptrap
// then, destruction - first scavtrap then claptrap 
// (i think because scavtrap is dependant on claptrap so if claptrap is gone
// before scavtrap, scavtrap cant destruct itself, so scavtrap goes first using
// destructor from claptrap, then claptrap can clean everything else up)

// claptrap  -> scavtrap    --     scavtrap  <-   claptrap
// create in order to create.... destroy what we made, then ourselves...


// inheritance.......
// need to update claptrap with new values for the attributes


// void guardGate();
// display a message informing that scavtrap is now in Gate keeper mode

// Derived class
class	ScavTrap : public ClapTrap
{
	// private:

	public:
		ScavTrap();
		ScavTrap(std::string &name);
		ScavTrap(const ScavTrap &value);
		ScavTrap	&operator=(const ScavTrap &vale);
		~ScavTrap();
	
	void	attack(const std::string &target);
	void	guardGate();
};

#endif
