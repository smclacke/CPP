/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:21 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:23:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump = Zombie(name);

	chump.announce();
}
