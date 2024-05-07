/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:57:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:04:57 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// # include <iostream>
# include "ICharacter.hpp"

// concrete class, instantiated
class Character : public ICharacter
{
	private:
		AMateria			*(_inventory[4]);
		std::string const	_name;

	public:
		Character();
		Character(std::string name);
		Character(const Character &copy);
		Character	&operator=(const Character &copy);
		~Character();

	// methods
	void				equip(AMateria *materia);
	void				unequip(int i);
	void				use(int i, ICharacter &target);

	// getters
	std::string const	&getName() const;
	AMateria			*getMateria(int i);

};

#endif
