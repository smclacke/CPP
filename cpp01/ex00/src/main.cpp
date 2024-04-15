/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/15 12:58:41 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

int	main()
{
	Zombie	*heapZom = newZombie("heapZom");
	Zombie	*ogZom = newZombie("ogZombie");

	heapZom->announce();
	ogZom->announce();
	
	delete heapZom;
	delete ogZom;

	randomChump("stackZom");
	randomChump("Chumpy");

	return (0);
}
