/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/22 20:54:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 18:06:29 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_damage;

	public:
		ScavTrap();
		ScavTrap(std::string &name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &copy);
		~ScavTrap();

	void	guardGate();
};

#endif
