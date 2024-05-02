/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:52:41 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 19:14:24 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl;

	DiamondTrap		def;

	std::string		dump = "dumpy";
	std::string		clap = "clappy";
	std::string		scav = "scavvy";
	std::string		frag = "fraggy";

	DiamondTrap		dumpy(dump);
	ClapTrap		clappy(clap);
	ScavTrap		scavvy(scav);
	FragTrap		fraggy(frag);

	// dumpy.whoAmI();

	std::cout << std::endl;

	return (0);
}
