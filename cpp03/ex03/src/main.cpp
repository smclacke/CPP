/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 15:45:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl;


	// default constructors
	DiamondTrap		diam;
	ScavTrap		scavvy;

	std::cout << std::endl;

	// parameterized constructor
	std::string		dump = "dumpName";
	DiamondTrap		dude(dump);

	std::cout << std::endl;
	
	dude.whoAmI();
	
	std::cout << std::endl;
	
	diam.guardGate();
	diam.highFivesGuys();
	diam.whoAmI();
	
	// copy constructors
	ScavTrap		scavCopy(scavvy);
	DiamondTrap		diamCopy(diam);
	
	std::cout << std::endl;
	
	scavvy.getEnergyPoints();
	scavvy.getHitPoints();
	dude.getEnergyPoints();
	diam.getHitPoints();

	std::cout << std::endl;

	// diam.attack("scavvy");
	// diam.getEnergyPoints();
	
	// std::cout << std::endl;

	// diam.attack("scavvy");
	// scavvy.takeDamage(30);
	

	std::cout << std::endl;

	return (0);
}
