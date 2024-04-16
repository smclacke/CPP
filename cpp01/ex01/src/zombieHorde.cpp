/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:23:38 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*newZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		newZombie[i].setName(name);
		newZombie[i].announce();
	}
	return (newZombie);
}
