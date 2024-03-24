/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:21 by smclacke      #+#    #+#                 */
/*   Updated: 2024/03/24 18:56:13 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	chump;

	chump.setName(name);
	chump.announce();

}
