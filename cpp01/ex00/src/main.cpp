/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/24 19:05:46 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

int	main()
{
	Zombie	*zom;

	zom = nullptr;

	zom->zombieMaking("OG_ZOM");
	zom->randomChump("Chump");
	// zom->newZombie("newest");

	// std::cout << zom << std::endl;

	return (0);
}
