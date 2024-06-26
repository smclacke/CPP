/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:26 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Weapon.hpp"

// ---- construtor ---- //
Weapon::Weapon(std::string type)
{
	_type = type;
}

// ---- destructor ---- //
Weapon::~Weapon(){}

// ---- getter ---- //
const	std::string	&Weapon::getType()
{
	return (_type);
}

// ---- setter ---- //
void	Weapon::setType(std::string type)
{
	_type = type;
}
