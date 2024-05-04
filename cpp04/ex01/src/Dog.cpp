/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 19:26:32 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

// default
Dog::Dog() : _dogBrain(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

// copy constructor
Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// copy assignment operator
Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return *this;
}

// destructor
Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}


// methods
void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

// getters
Brain	*Dog::getBrain() const
{
	return this->_dogBrain;
}
