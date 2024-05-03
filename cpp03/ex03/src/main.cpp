/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:03:38 by smclacke      ########   odam.nl         */
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
	
	// copy constructors
	ScavTrap		scavCopy(scavvy);
	DiamondTrap		diamCopy(diam);
	
	std::cout << std::endl;
	
	scavvy.getEnergyPoints();
	scavvy.getHitPoints();
	dude.getEnergyPoints();
	diam.getHitPoints();

	std::cout << std::endl;

	diam.attack("scavvy");
	diam.getEnergyPoints();
	
	std::cout << std::endl;

	diam.attack("scavvy");
	scavvy.takeDamage(30);
	
	std::cout << std::endl;
	
	scavvy.guardGate();
	diam.whoAmI();
	
	dude.privateName();

	std::cout << std::endl;

	return (0);
}
