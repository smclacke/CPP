/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 15:04:38 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int	main()
{
	std::cout << std::endl;

	ScavTrap		ogScavTrap;
	ClapTrap		ogClapTrap;

	ScavTrap		copyScav(ogScavTrap);

	FragTrap		ogFragTrap;

	FragTrap		copyFrag(ogFragTrap);

	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------- START ----------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;

	
	std::string		clappy = "clappy";
	std::string		scavvy = "scavvy";
	std::string		fraggy = "fraggy";
	
	ClapTrap		clapTrap(clappy);
	ScavTrap		scavTrap(scavvy);
	FragTrap		fragTrap(fraggy);

	std::cout << std::endl << std::endl;
	
	std::cout << "------------- DINGDINGDING --------------" << std::endl;
	std::cout << "---------------- Round 1 --------------" << std::endl << std::endl;
	
	clapTrap.setDamage(4);
	clapTrap.attack(scavvy);
	scavTrap.takeDamage(4);
	scavTrap.beRepaired(3);
	
	std::cout << '\n';

	fragTrap.highFivesGuys();

	clapTrap.getHitCount();
	scavTrap.getHitCount();
	
	scavTrap.guardGate();
	scavTrap.takeDamage(100);
	scavTrap.takeDamage(99);
	scavTrap.guardGate();

	std::cout << '\n';
	
	scavTrap.setDamage(2);
	clapTrap.attack(clappy);
	clapTrap.takeDamage(2);
	clapTrap.beRepaired(6);
	fragTrap.highFivesGuys();
	
	std::cout << '\n';
	
	clapTrap.getHitCount();
	scavTrap.getHitCount();
	
	fragTrap.highFivesGuys();
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
