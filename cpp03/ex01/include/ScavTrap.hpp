/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:54:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/22 21:01:13 by smclacke      ########   odam.nl         */
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

#endif
