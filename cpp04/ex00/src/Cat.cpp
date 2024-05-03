/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:46:36 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

// default
Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

// copy
Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
Cat	&Cat::operator=(const Cat &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return this->_type;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

