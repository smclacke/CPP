/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 17:05:41 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main()
{
	std::cout << std::endl;

	// default constructors
	// ScavTrap		ogScavTrap;
	// ClapTrap		ogClapTrap;
	
	std::cout << std::endl << std::endl;

	// parameterized constructors
	std::string		clappy = "clappy";
	std::string		scavvy = "scavvy";
	
	ClapTrap		clapTrap(clappy);
	ScavTrap		scavTrap(scavvy);
	

	scavTrap.guardGate();

	std::cout << std::endl << std::endl;

	// claptrap overwritten with scavtrap via '=' copy assignment operator
	clapTrap = scavTrap;

	clapTrap.getHitPoints();
	clapTrap.getEnergyPoints();
	clapTrap.getDamageAmount();

	std::cout << std::endl << std::endl;

	// claptrap overwritten with scavtrap class using copy constructor
	ClapTrap	clappers(clapTrap);
	
	clappers.getHitPoints();
	clappers.getEnergyPoints();
	clappers.getDamageAmount();

	
	scavTrap.attack("clappers");
	clappers.takeDamage(20);
	scavTrap.getEnergyPoints();

	// clappers.guardGate(); // but cannot guardGate since it is still ClapTrap object
	// it's just been given the object attributes of scavtrap

	
	std::cout << std::endl << std::endl;
	
	
	
	// std::cout << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << "--------------- START ----------------" << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "------------- DINGDINGDING --------------" << std::endl;
	// std::cout << "---------------- Round 1 --------------" << std::endl << std::endl;
	
	// clapTrap.setDamage(4);
	// clapTrap.attack(scavvy);
	// scavTrap.takeDamage(4);
	// scavTrap.beRepaired(3);
	// scavTrap.attack(clappy);
	
	// std::cout << '\n';

	// clapTrap.getHitPoints();
	// scavTrap.getHitPoints();
	
	// scavTrap.guardGate();
	// scavTrap.takeDamage(100);
	// scavTrap.takeDamage(99);
	// scavTrap.guardGate();

	// std::cout << '\n';
	
	// scavTrap.setDamage(2);
	// clapTrap.attack(clappy);
	// clapTrap.takeDamage(2);
	// clapTrap.beRepaired(6);
	
	// std::cout << '\n';
	
	// clapTrap.getHitPoints();
	// scavTrap.getHitPoints();
	
	// std::cout << '\n';
	
	// clapTrap.setDamage(14);
	// clapTrap.attack(scavvy);
	// scavTrap.takeDamage(14);
	// scavTrap.beRepaired(10);

	// std::cout << std::endl << std::endl;

	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << "------------- GAME OVER --------------" << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	
	// std::cout << std::endl;

	return (0);
}
