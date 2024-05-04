/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 16:49:34 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

// default
Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

// copy constructor (shallow copy)
Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator (deep copy)
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


// methods
void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Brain	&Cat::getBrain() const
{
	return *this->_catBrain;
}

