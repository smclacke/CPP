/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/05 16:23:48 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/05 17:14:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Ice.hpp"
# include "../include/ICharacter.hpp"

// default
Ice::Ice() : _type("ice")
{
	std::cout << "Ice Default Constructor called" << std::endl;
}

// copy constructor
Ice::Ice(const Ice &copy) : _type(copy.getType())
{
	std::cout << "Ice Copy Constructor called" << std::endl;
}

// copy assignment operator
Ice	&Ice::operator=(const Ice &copy)
{
	std::cout << "Ice Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy.getType();
	}
	return *this;
}

// destructor
Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}


// methods
Ice	*Ice::clone() const
{
	Ice	*newIce = new Ice;
	return newIce;
}

void	Ice::use(ICharacter &target)
{
	std::string	targetName = target.getName();
	
	std::cout << this->_type << "* shoots an ice bolt at " << targetName << " *" << std::endl;
}


// getters
std::string const	&Ice::getType() const
{
	return this->_type;
}