/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:34:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:38:59 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MateriaSource.hpp"

// default
MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

// copy constructor
MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if ((copy._inventory)[i])
			(this->_inventory)[i] = (copy._inventory[i]->clone());
	}
}

// copy assignment operator // can't change name cause const
MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource Copy assignment operator called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (copy._inventory[i])
			this->_inventory[i] = (copy._inventory[i])->clone();
	}
	return *this;
}

// destructor
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}


// methods
void		MateriaSource::learnMateria(AMateria *materia)
{
	
}

AMateria	*MateriaSource::createMateria(std::string const &copy)
{
	
}


