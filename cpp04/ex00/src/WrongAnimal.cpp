/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:51:57 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:52:19 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/WrongAnimal.hpp"

// default
WrongAnimal::WrongAnimal() : _type("WRONG")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

// copy
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
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

std::string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WRONG SOUND" << std::endl;
}

