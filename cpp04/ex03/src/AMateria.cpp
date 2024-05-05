/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 16:34:12 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AMateria.hpp"

// default
AMateria::AMateria() : _type() // keep this or no?
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

// parameterised constructor
AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria parameterised constructor called" << std::endl;
}

// copy constructor
AMateria::AMateria(const AMateria &copy) : _type(copy._type) // instead of *this = copy;
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

// copy assignment operator // unusabe since abstract?
AMateria	&AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	// if (this != &copy)
	// {
	// 	this->_type = copy._type; // can't do this, cause abstract?
	// }
	return *this;
}

// destructor
AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}


// methods
void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria abstract use on " << target.getName() << std::endl;
}


// getters
std::string const	&AMateria::getType() const
{
	return this->_type;
}
