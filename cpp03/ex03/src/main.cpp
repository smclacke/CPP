/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 18:26:22 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl;

	// ClapTrap		clap;
	// FragTrap		freg;

	// std::cout << std::endl << "here" << std::endl << std::endl;
	
	// DiamondTrap		dia;

	// std::cout << std::endl << "there" << std::endl << std::endl;
	
	// ClapTrap		clappy;
	
	// std::cout << std::endl << "everywhere" << std::endl << std::endl;
	
	// clappy = dia;
	

	// DiamondTrap		diaCopy(dia);
	
	// std::cout << std::endl << "printing" << std::endl << std::endl;

	// DiamondTrap		third;

	
	
	// std::cout << std::endl << "dia" << std::endl << std::endl;
	
	// dia.whoAmI();
	
	// std::cout << std::endl << "diacopy" << std::endl << std::endl;
	
	// diaCopy.whoAmI();
	
	// std::cout << std::endl << "third" << std::endl << std::endl;
	// third.whoAmI();
	

	std::string		dump = "dumpName";

	// DiamondTrap		deff;
	// DiamondTrap		dumpy(dump);
	// ClapTrap		clappyy;
	// ScavTrap		scavvyyy;

	// dumpy.whoAmI();
	// deff.whoAmI();
	
	// deff.setDamage(700);
	
	FragTrap		fraggy;
	FragTrap		fragCopy(fraggy);
	DiamondTrap		diam;
	DiamondTrap		diamCopy(diam);
	
	fraggy.getEnergyCount();
	fragCopy.getEnergyCount();
	diam.getEnergyCount();
	diamCopy.getEnergyCount();
	
	// deff.getDamageAmount();
	// dumpy.getDamageAmount();
	// fraggy.getDamageAmount();
	// clappyy.getDamageAmount();
	// scavvyyy.getDamageAmount();
	

	// std::string		dump = "dumpy";
	// std::string		clap = "clappy";
	// std::string		scav = "scavvy";
	// std::string		frag = "fraggy";

	// DiamondTrap		dumpy(dump);
	// ClapTrap		clappy(clap);
	// ScavTrap		scavvy(scav);
	// FragTrap		fraggy(frag);


	std::cout << std::endl;

	return (0);
}
