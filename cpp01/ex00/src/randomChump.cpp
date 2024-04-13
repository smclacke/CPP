/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:21 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 00:56:47 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	chump = Zombie(name);

	chump.announce();
}
