/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:30:49 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 18:46:51 by smclacke      ########   odam.nl         */
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
		MateriaSource(const MateriaSource &copy);
		MateriaSource		&operator=(const MateriaSource &copy);
		~MateriaSource();

	// methods
	void		learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string const &type);

};

#endif
