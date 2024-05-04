/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:51:57 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 19:29:44 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/WrongAnimal.hpp"

// default
WrongAnimal::WrongAnimal() : _type("just so wrong...")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

// copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

// getters
std::string	WrongAnimal::getType() const
{
	return this->_type;
}

// methods
void	WrongAnimal::makeSound() const
{
	std::cout << "wrong sounds" << std::endl;
}

