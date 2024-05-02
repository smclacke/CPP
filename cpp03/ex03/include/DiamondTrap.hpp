/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/02 17:06:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	_name;
		// FragTrap	_hitPoints;
		// ScavTrap	_energyPoints;
		// FragTrap	_damage;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(const DiamondTrap &value);
		DiamondTrap	&operator=(const DiamondTrap &value);
		~DiamondTrap();

		void	attack(const std::string &target);
		void	whoAmI();
};


#endif
