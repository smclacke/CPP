/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 01:07:15 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*newZom = new Zombie(name);
	
	return (newZom);
}
