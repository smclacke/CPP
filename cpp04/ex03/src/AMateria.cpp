/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 20:52:43 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/07 16:12:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AMateria.hpp"

// default
AMateria::AMateria()
{
	// std::cout << "AMateria Default Constructor called" << std::endl;
}

// parameterised constructor
AMateria::AMateria(const std::string &type) : _type(type)
{
	// std::cout << "AMateria parameterised constructor called" << std::endl;
}

// copy constructor
AMateria::AMateria(const AMateria &copy) : _type(copy._type) // instead of *this = copy;
{
	// std::cout << "AMateria Copy Constructor called" << std::endl;
}

// destructor
AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}


// methods
void	AMateria::use(ICharacter &target)
{
	std::cout << "Abstract AMateria used on " << target.getName() << std::endl;
}


// getters
std::string const	&AMateria::getType() const
{
	return this->_type;
}
