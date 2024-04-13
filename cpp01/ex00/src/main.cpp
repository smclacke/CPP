/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:05:14 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 01:07:03 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

int	main()
{
	Zombie	*heapZom = newZombie("heapZom");
	heapZom->announce();
	delete heapZom;

	randomChump("stackZom");

	return (0);
}
