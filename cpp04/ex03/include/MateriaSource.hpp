/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:30:49 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 13:17:28 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

// class AMateria;

// concrete class, can/must be instantiated
class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*(_inventory[4]);

	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource		&operator=(const MateriaSource &copy);
		~MateriaSource();

	// methods
	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string const &type);

};

#endif
