/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:59:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 20:14:03 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int		main()
{

	std::cout << std::endl;

	ClapTrap		ogClapTrap;
	
	std::cout << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "--------------- START ----------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << std::endl;

	
	std::string		player1 = "Player1";
	std::string		player2 = "Player2";
	
	ClapTrap		clapTrap1(player1);
	ClapTrap		clapTrap2(player2);

	std::cout << std::endl << std::endl;
	
	std::cout << "------------- DINGDINGDING --------------" << std::endl;
	std::cout << "---------------- Round 1 --------------" << std::endl << std::endl;
	
	clapTrap1.setDamage(4);
	clapTrap1.attack(player2);
	clapTrap2.takeDamage(4);
	clapTrap2.beRepaired(3);
	
	std::cout << '\n';

	clapTrap1.getHitPoints();
	clapTrap2.getHitPoints();
	
	std::cout << '\n';
	
	clapTrap2.setDamage(2);
	clapTrap2.attack(player1);
	clapTrap1.takeDamage(2);
	clapTrap1.beRepaired(6);
	
	std::cout << '\n';
	
	clapTrap1.getHitPoints();
	clapTrap2.getHitPoints();
	
	std::cout << '\n';
	
	clapTrap1.setDamage(14);
	clapTrap1.attack(player2);
	clapTrap2.takeDamage(14);
	clapTrap2.beRepaired(10);

	std::cout << std::endl << std::endl;
	

	
	// ------------- extra shizzle --------------- //

	std::cout << std::endl << std::endl;
	std::cout << "------------- DINGDINGDING --------------" << std::endl;
	std::cout << "--------------- Round 2 --------------" << std::endl << std::endl;
	
	std::string		player3 = "Player3";
	
	ClapTrap	clapTrap3(player3);
	
	std::cout << '\n';
	
	clapTrap3.setDamage(10);
	clapTrap2.attack(player3);
	clapTrap3.takeDamage(10);
	
	std::cout << '\n';

	clapTrap3.getHitPoints();
	
	std::cout << '\n';

	clapTrap3.attack(player2);

	std::cout << std::endl << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << "------------- GAME OVER --------------" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
	std::cout << std::endl;

	return (0);
}
