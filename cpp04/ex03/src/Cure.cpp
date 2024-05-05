/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:50:42 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:14:09 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cure.hpp"

// default
Cure::Cure() : _type("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

// copy constructor
Cure::Cure(const Cure &copy) : _type(copy.getType())
{
	std::cout << "Cure Copy Constructor called" << std::endl;
}

// copy assignment operator
Cure	&Cure::operator=(const Cure &copy)
{
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
	}
	return *this;
}

// destructor
Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}


// methods
Cure	*Cure::clone() const
{
	Cure	*newCure = new Cure;
	return newCure;
}

void	Cure::use(ICharacter &target)
{
	std::string	targetName = target.getName();
	
	std::cout << this->_type << "* heals " << targetName << "'s wounds *" << std::endl;
}


// getters
std::string const	&Cure::getType() const
{
	return this->_type;
}