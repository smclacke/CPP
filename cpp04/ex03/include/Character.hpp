/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:57:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:03:56 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*(_inventory[4]);
		std::string const	_name;

	public:
		Character();
		Character(std::string name);
		Character(Character const &copy);
		Character	&operator=(Character const &copy);
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
