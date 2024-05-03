/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/02 15:06:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 18:43:53 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP


#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		// std::string		_name; // ????
		// int				_hitPoints;
		// int				_energyPoints;
		// int				_damage;
		
	public:
		DiamondTrap();
		DiamondTrap(std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap	&operator=(const DiamondTrap &copy);
		~DiamondTrap();

		void		attack(const std::string &target);
		void		whoAmI();
};


#endif
