/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:12:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 20:48:16 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/AAnimal.hpp"

// default
AAnimal::AAnimal() : _type("undisclosed")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

// copy constructor
AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
AAnimal	&AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

// don't need this implementation anymore
// methods
// void	AAnimal::makeSound() const
// {
// 	std::cout << "... insert jungle sounds here..." << std::endl;
// }

// getters
std::string	AAnimal::getType() const
{
	return this->_type;
}

