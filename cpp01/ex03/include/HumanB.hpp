/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:05 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "../include/Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon			*_weapon;

	public:
		HumanB(std::string name);
		~HumanB();

		void			attack();
		void			setWeapon(Weapon &weapon);
};

#endif
