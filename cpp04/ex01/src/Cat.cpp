/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:28 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 19:26:39 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Cat.hpp"

// default
Cat::Cat() : _catBrain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

// copy constructor
Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
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

// getters
Brain	*Cat::getBrain() const
{
	return this->_catBrain;
}
