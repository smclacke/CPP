/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 20:14:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int	main()
{
	std::cout << std::endl;

	ScavTrap		ogScavTrap;
	ClapTrap		ogClapTrap;

	ScavTrap		copyScav(ogScavTrap);

	
	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------- START ----------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;

	
	std::string		clappy = "clappy";
	std::string		scavvy = "scavvy";
	
	ClapTrap		clapTrap(clappy);
	ScavTrap		scavTrap(scavvy);

	std::cout << std::endl << std::endl;
	
	std::cout << "------------- DINGDINGDING --------------" << std::endl;
	std::cout << "---------------- Round 1 --------------" << std::endl << std::endl;
	
	clapTrap.setDamage(4);
	clapTrap.attack(scavvy);
	scavTrap.takeDamage(4);
	scavTrap.beRepaired(3);
	scavTrap.attack(clappy);
	
	std::cout << '\n';

	clapTrap.getHitPoints();
	scavTrap.getHitPoints();
	
	scavTrap.guardGate();
	scavTrap.takeDamage(100);
	scavTrap.takeDamage(99);
	scavTrap.guardGate();

	std::cout << '\n';
	
	scavTrap.setDamage(2);
	clapTrap.attack(clappy);
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(6);
	
	std::cout << '\n';
	
	clapTrap.getHitPoints();
	scavTrap.getHitPoints();
	
	std::cout << '\n';
	
	clapTrap.setDamage(14);
	clapTrap.attack(scavvy);
	scavTrap.takeDamage(14);
	scavTrap.beRepaired(10);

	std::cout << std::endl << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << "------------- GAME OVER --------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
	std::cout << std::endl;

	return (0);
}
