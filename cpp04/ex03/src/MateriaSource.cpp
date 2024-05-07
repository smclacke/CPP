/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 17:34:52 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 13:04:03 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/MateriaSource.hpp"
// # include "../include/IMateriaSource.hpp"
// # include "../include/AMateria.hpp"

// default
MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default Constructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		(this->_inventory)[i] = 0;
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
	int		i = 0;

	while ((this->_inventory)[i] != 0 && 1 < 4)
		i++;
	
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia" << std::endl;
		return ;
	}
	
	(this->_inventory)[i] = materia;
	
	std::cout << "Learned " << materia->getType() << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int		i = 0;
	
	while ((this->_inventory)[i] && ((this->_inventory)[i])->getType() != type && i < 4)
		i++;
	
	if (i >= 4 || !(this->_inventory)[i])
	{
		std::cout << type << " materia does not exist" << std::endl;
		return (0);
	}

	std::cout << "Created " << type << " Materia" << std::endl;

	return (((this->_inventory)[i])->clone());

}


