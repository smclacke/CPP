/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 15:02:18 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <cstring>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_damage;

	public:
		ClapTrap();
		ClapTrap(std::string &name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &copy);
		~ClapTrap();

	void				attack(const std::string &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	void				setName(std::string name);
	void				setHitPoints(unsigned int amount);
	void				setEnergyPoints(unsigned int amount);
	void				setDamage(unsigned int amount);

	std::string			getName();
	unsigned int		getHitPoints();
	unsigned int		getEnergyPoints();
	unsigned int		getDamageAmount();
};


#endif
