/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 20:16:09 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	main()
{
	std::cout << std::endl;


	FragTrap		fraggy;
	FragTrap		fragCopy(fraggy);
	ScavTrap		scav;
	ScavTrap		scavCopy(scav);

	fraggy.getEnergyPoints();
	fragCopy.getEnergyPoints();
	scav.getEnergyPoints();
	scavCopy.getEnergyPoints();

	// ScavTrap		ogScavTrap;
	// ClapTrap		ogClapTrap;
	// FragTrap		ogFragTrap;
	
	// ScavTrap		copyScav(ogScavTrap);
	// FragTrap		copyFrag(ogFragTrap);

	// std::cout << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << "--------------- START ----------------" << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << std::endl;

	
	// std::string		clappy = "clappy";
	// std::string		scavvy = "scavvy";
	// std::string		fraggy = "fraggy";
	
	// ClapTrap		clapTrap(clappy);
	// ScavTrap		scavTrap(scavvy);
	// FragTrap		fragTrap(fraggy);

	// scavTrap.getHitPoints();
	// ogScavTrap.getHitPoints();

	// std::cout << std::endl << std::endl;
	
	// std::cout << "------------- DINGDINGDING --------------" << std::endl;
	// std::cout << "---------------- Round 1 --------------" << std::endl << std::endl;
	
	// clapTrap.setDamage(4);
	// clapTrap.attack(scavvy);
	// scavTrap.takeDamage(4);
	// scavTrap.beRepaired(3);
	
	// std::cout << '\n';

	// fragTrap.highFivesGuys();

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
	// fragTrap.highFivesGuys();
	
	// std::cout << '\n';
	
	// clapTrap.getHitPoints();
	// scavTrap.getHitPoints();
	
	// fragTrap.highFivesGuys();
	// std::cout << '\n';
	
	// clapTrap.setDamage(14);
	// clapTrap.attack(scavvy);
	// scavTrap.takeDamage(14);
	// scavTrap.beRepaired(10);

	// std::cout << std::endl << std::endl;

	// std::cout << "--------------------------------------" << std::endl;
	// std::cout << "------------- GAME OVER --------------" << std::endl;
	// std::cout << "--------------------------------------" << std::endl;
	
	std::cout << std::endl;

	return (0);
}
