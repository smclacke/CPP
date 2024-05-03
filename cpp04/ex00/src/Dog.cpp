/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/03 21:15:17 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/03 21:58:52 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Dog.hpp"

// default
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

// copy
Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

// copy overload operator
Dog	&Dog::operator=(const Dog &copy)
{
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

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
