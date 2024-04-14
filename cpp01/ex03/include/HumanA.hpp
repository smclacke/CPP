/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 01:54:43 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "../include/Weapon.hpp"

class	HumanA
{
	private:
		std::string		_name;
		Weapon			&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void		attack();
};

#endif
