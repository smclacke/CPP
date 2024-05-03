/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:12:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:46:40 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Animal.hpp"

// default
Animal::Animal() : _type("undisclosed")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

// copy
Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
Animal	&Animal::operator=(const Animal &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->_type;
}

void	Animal::makeSound() const
{
	std::cout << "... insert jungle sounds here..." << std::endl;
}

