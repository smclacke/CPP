/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:30:49 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:34:42 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*(_inventory[4]);

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &copy);
		MateriaSource		&operator=(MateriaSource const &copy);
		~MateriaSource();

	// methods
	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string cont &type);

};

#endif
