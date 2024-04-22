/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:59:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/22 17:40:00 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int		main()
{
	ClapTrap	defaultPlayer;

	ClapTrap	player1("Player1");
	ClapTrap	player2("Player2");

	std::cout << std::endl << std::endl;

	player1.attack("Player2");
	player2.takeDamage(5);
	player2.beRepaired(3);
	
	std::cout << std::endl << std::endl;

	return (0);
}
