/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 15:21:49 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	main()
{
	std::cout << std::endl;

	// default constructors
	FragTrap		fraggy;
	ScavTrap		scav;

	// copy constructors
	FragTrap		fragCopy(fraggy);
	ScavTrap		scavCopy(scav);

	std::cout << std::endl;

	fragCopy.highFivesGuys();

	// scavCopy.highFivesGuys(); // not part of derived class or base class (only fragtrap)
	
	std::cout << std::endl;

	// each individually updating their derived versions of
	// the private attributes of ClapTrap

	scavCopy.getEnergyPoints();
	scavCopy.getHitPoints();
	scavCopy.getDamageAmount();
	
	std::cout << std::endl;
	
	fragCopy.getEnergyPoints();
	fragCopy.getHitPoints();
	fragCopy.getDamageAmount();

	std::cout << std::endl;

	scav.guardGate();
	// fraggy.guardGate(); // can't guardgate, only scavtrap objects can
	
	// claptrap class attributes stay the same
	
	ClapTrap	clappy;

	clappy.getEnergyPoints();
	clappy.getHitPoints();
	clappy.getDamageAmount();

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
