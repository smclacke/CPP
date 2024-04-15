/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/15 22:59:30 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

int	main()
{
	int		N = 25;
	int		D = 5;

	Zombie	*hordeZom = zombieHorde(N, "zombieRave");
	delete[] hordeZom;

	Zombie	*smolZom = zombieHorde(D, "zombieBorrel");
	delete[] smolZom;
	
	return (0);
}
