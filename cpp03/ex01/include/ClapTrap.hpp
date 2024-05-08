/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/21 20:58:10 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/08 19:39:02 by smclacke      ########   odam.nl         */
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
	protected:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_damage;

	public:
		ClapTrap();
		ClapTrap(std::string &name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap	&operator=(const ClapTrap &copy);
		virtual ~ClapTrap();

	virtual void				attack(const std::string &target);
	virtual void				takeDamage(unsigned int amount);
	virtual void				beRepaired(unsigned int amount);
 
	virtual void				setName(std::string name);
	virtual void				setHitPoints(unsigned int amount);
	virtual void				setEnergyPoints(unsigned int amount);
	virtual void				setDamage(unsigned int amount);

	virtual std::string			getName();
	virtual unsigned int		getHitPoints();
	virtual unsigned int		getEnergyPoints();
	virtual unsigned int		getDamageAmount();
};


#endif
